/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116934
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116934 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116934
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        /* LoopSeq 2 */
        for (int i_1 = 2; i_1 < 17; i_1 += 2) 
        {
            var_13 ^= ((/* implicit */signed char) (_Bool)1);
            arr_5 [i_0] [i_0] [i_0] = ((/* implicit */int) arr_2 [i_0]);
            var_14 += ((/* implicit */unsigned long long int) min((((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned short) (_Bool)1))) || (((/* implicit */_Bool) min((((/* implicit */int) (_Bool)1)), (-990431641))))))), ((~(0LL)))));
        }
        for (long long int i_2 = 0; i_2 < 20; i_2 += 2) 
        {
            /* LoopNest 3 */
            for (unsigned long long int i_3 = 1; i_3 < 19; i_3 += 4) 
            {
                for (unsigned short i_4 = 0; i_4 < 20; i_4 += 3) 
                {
                    for (int i_5 = 0; i_5 < 20; i_5 += 1) 
                    {
                        {
                            arr_15 [i_0] [i_2] [i_4] [(signed char)12] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) (~(((/* implicit */int) arr_9 [i_4] [i_3] [(unsigned char)3]))))))) < (((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) var_1)))) / (((((/* implicit */_Bool) 340097695U)) ? (9096611487223098608ULL) : (var_9)))))));
                            arr_16 [i_4] [i_2] [i_2] [i_2] [i_2] = ((/* implicit */signed char) (((+(((((/* implicit */_Bool) -1975547266)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (unsigned short)59933)))))) / ((-((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (-990431641)))))));
                            arr_17 [i_0] [i_0] [(unsigned char)16] [i_4] [i_5] [i_4] [i_4] = (!(((/* implicit */_Bool) min((var_11), (((/* implicit */int) arr_1 [i_3 + 1]))))));
                        }
                    } 
                } 
            } 
            arr_18 [i_0] [(unsigned char)15] = ((/* implicit */long long int) ((int) ((((unsigned long long int) var_0)) % (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) arr_3 [i_2] [i_2] [i_2])))))));
            var_15 = ((/* implicit */signed char) (((_Bool)1) || (((/* implicit */_Bool) 970362196U))));
            arr_19 [i_0] = ((/* implicit */short) min((((((/* implicit */_Bool) ((unsigned int) 3324605100U))) ? (((unsigned int) var_10)) : (((/* implicit */unsigned int) (-(((/* implicit */int) var_2))))))), (((/* implicit */unsigned int) ((_Bool) ((unsigned short) (unsigned short)49848))))));
        }
        var_16 |= ((/* implicit */_Bool) ((min((((/* implicit */long long int) (_Bool)1)), (arr_11 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))) + (((/* implicit */long long int) ((unsigned int) arr_11 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))));
        var_17 = ((/* implicit */_Bool) min((var_17), (((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((long long int) arr_7 [i_0] [i_0]))), (((arr_3 [i_0] [10LL] [i_0]) << (((((/* implicit */int) var_2)) - (37802)))))))) || (((/* implicit */_Bool) ((unsigned short) (((_Bool)1) ? (((/* implicit */int) arr_10 [18LL] [i_0] [i_0])) : (((/* implicit */int) (_Bool)0))))))))));
        var_18 = ((/* implicit */_Bool) max(((unsigned short)8878), (((/* implicit */unsigned short) (_Bool)1))));
        arr_20 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 343632463578208399LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) : (((unsigned long long int) var_0))))) ? (((((/* implicit */_Bool) var_5)) ? (((long long int) (_Bool)1)) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)60))))) : (((long long int) arr_6 [(signed char)0] [i_0] [i_0]))));
    }
    for (unsigned long long int i_6 = 2; i_6 < 19; i_6 += 4) 
    {
        /* LoopNest 2 */
        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
        {
            for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
            {
                {
                    var_19 = ((/* implicit */unsigned short) (-(((-6887193448769288722LL) - (((/* implicit */long long int) ((/* implicit */int) (short)9385)))))));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (int i_9 = 0; i_9 < 21; i_9 += 1) /* same iter space */
                    {
                        arr_33 [i_7] [i_9] [i_9] [i_9] [i_7] [i_8] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_22 [i_6 - 1])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_22 [i_6 + 2]))));
                        var_20 = ((((/* implicit */_Bool) -547623910)) ? (((/* implicit */int) (unsigned char)8)) : (((/* implicit */int) (_Bool)1)));
                        var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2050153991U)) ? (arr_32 [i_7] [i_7]) : (((/* implicit */int) (short)11213))))) ? (((((/* implicit */_Bool) 41744744U)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (arr_24 [(_Bool)1]))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_27 [i_7] [i_7])) ? (((/* implicit */int) (unsigned char)93)) : (((/* implicit */int) (signed char)-36)))))));
                    }
                    for (int i_10 = 0; i_10 < 21; i_10 += 1) /* same iter space */
                    {
                        arr_36 [i_6 - 1] [i_7] [i_7] [i_10] [i_10] = ((((/* implicit */_Bool) ((((arr_35 [i_6 + 2] [i_7] [i_8] [(_Bool)1] [7ULL] [i_10]) / (((/* implicit */long long int) 1622361693U)))) - (((/* implicit */long long int) ((/* implicit */int) (short)-11205)))))) ? (((/* implicit */int) var_3)) : (min((((/* implicit */int) var_7)), ((+(((/* implicit */int) var_2)))))));
                        arr_37 [i_6] [i_7] [i_10] [i_10] [i_7] [i_10] = ((/* implicit */unsigned short) ((((((/* implicit */int) ((unsigned char) -1LL))) > (((((/* implicit */_Bool) arr_22 [i_8])) ? (((/* implicit */int) (short)-11195)) : (((/* implicit */int) arr_23 [i_6 - 1])))))) ? (((/* implicit */unsigned long long int) min((arr_21 [i_6 - 2]), (((/* implicit */long long int) min(((unsigned short)35446), (var_2))))))) : (((((68719476736ULL) << (((arr_32 [i_7] [i_7]) + (2063565740))))) << (((/* implicit */int) min((((/* implicit */unsigned short) arr_30 [i_6])), (var_2))))))));
                        arr_38 [i_6] [i_7] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)-2967)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) : (((max((((/* implicit */unsigned long long int) (unsigned char)140)), (arr_26 [i_6 + 2] [i_7]))) << (((arr_26 [i_6 - 2] [i_6 + 1]) - (7222913793273857375ULL)))))));
                        arr_39 [i_6] [i_7] [i_7] [i_7] [i_7] = ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)9)) << (((/* implicit */int) (unsigned char)0))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((13453812794978614313ULL) < (((/* implicit */unsigned long long int) arr_31 [i_7] [i_6] [i_6 + 1] [i_6])))))) : ((-(arr_31 [i_7] [(short)16] [i_6 - 1] [i_6 + 2]))));
                    }
                    var_22 ^= ((/* implicit */_Bool) 990431641);
                    arr_40 [i_7] = ((/* implicit */signed char) (unsigned char)0);
                }
            } 
        } 
        var_23 = ((/* implicit */short) max((var_23), (((/* implicit */short) ((((/* implicit */_Bool) ((((5511333672585848500LL) & (((/* implicit */long long int) ((/* implicit */int) arr_34 [i_6 + 1] [i_6 + 1] [i_6 - 1] [i_6] [i_6]))))) * (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) * (0U))))))) ? (((/* implicit */unsigned long long int) ((int) min((var_2), (((/* implicit */unsigned short) arr_29 [i_6] [i_6] [(signed char)0])))))) : (((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) arr_23 [i_6])) : (((/* implicit */int) var_5))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (short)4096)) ^ (((/* implicit */int) (short)-2967))))) : ((~(15193403252674078804ULL))))))))));
    }
    var_24 = ((/* implicit */long long int) var_0);
}
