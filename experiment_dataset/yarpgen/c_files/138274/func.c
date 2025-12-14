/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138274
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138274 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138274
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
    var_13 = ((/* implicit */int) var_8);
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            for (long long int i_2 = 0; i_2 < 21; i_2 += 1) 
            {
                {
                    arr_6 [i_2] = ((/* implicit */unsigned int) (~(((unsigned long long int) arr_5 [17ULL] [i_2] [i_0] [i_0]))));
                    var_14 = ((/* implicit */short) (!(((/* implicit */_Bool) (~(((/* implicit */int) ((short) (_Bool)1))))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 21; i_3 += 3) 
                    {
                        for (long long int i_4 = 0; i_4 < 21; i_4 += 1) 
                        {
                            {
                                arr_11 [i_2] [i_2] = ((/* implicit */long long int) ((unsigned int) (-(arr_3 [i_4]))));
                                var_15 &= (+((-(((/* implicit */int) (_Bool)1)))));
                                var_16 = ((/* implicit */long long int) max((var_16), (((/* implicit */long long int) min(((!(((/* implicit */_Bool) arr_4 [i_0] [i_1] [i_2] [i_3])))), ((!(((7873091107541962582ULL) != (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)105))))))))))));
                                var_17 = ((/* implicit */unsigned long long int) 536870911);
                                var_18 = ((/* implicit */short) min((var_18), (((/* implicit */short) (~((~((~(((/* implicit */int) (_Bool)1)))))))))));
                            }
                        } 
                    } 
                    var_19 = ((/* implicit */unsigned int) max((var_19), (((/* implicit */unsigned int) (signed char)13))));
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */long long int) ((unsigned long long int) var_3));
    /* LoopSeq 4 */
    for (unsigned char i_5 = 0; i_5 < 25; i_5 += 3) 
    {
        var_21 = ((/* implicit */short) min((var_21), (((/* implicit */short) arr_13 [i_5]))));
        arr_15 [0] |= ((/* implicit */signed char) max((((/* implicit */int) (unsigned char)2)), (((int) arr_14 [i_5]))));
        var_22 = ((/* implicit */short) (((((+(((/* implicit */int) var_12)))) * (((((/* implicit */int) arr_13 [i_5])) * (((/* implicit */int) arr_12 [i_5])))))) * (((/* implicit */int) (_Bool)1))));
    }
    for (int i_6 = 0; i_6 < 17; i_6 += 4) 
    {
        arr_19 [i_6] = ((/* implicit */long long int) ((((((/* implicit */_Bool) max((-131625359), (((/* implicit */int) arr_18 [i_6]))))) ? (5549130925799788498ULL) : (arr_0 [i_6]))) * (((/* implicit */unsigned long long int) (+(-1802821151))))));
        arr_20 [i_6] [i_6] = ((/* implicit */unsigned int) arr_7 [i_6] [i_6] [i_6]);
        var_23 = ((/* implicit */int) arr_4 [16LL] [i_6] [i_6] [i_6]);
    }
    for (unsigned char i_7 = 3; i_7 < 19; i_7 += 1) 
    {
        arr_23 [i_7] = ((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) != (((((/* implicit */_Bool) ((signed char) 281474976710655LL))) ? (((/* implicit */unsigned int) -483342294)) : (max((((/* implicit */unsigned int) arr_21 [i_7])), (1089685994U)))))));
        /* LoopNest 2 */
        for (unsigned long long int i_8 = 0; i_8 < 22; i_8 += 2) 
        {
            for (int i_9 = 0; i_9 < 22; i_9 += 3) 
            {
                {
                    var_24 = ((/* implicit */unsigned char) min((var_24), (((/* implicit */unsigned char) ((signed char) arr_13 [i_7])))));
                    arr_30 [i_9] [i_9] [i_7] [i_7] = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_26 [i_7 + 2])) ? (arr_28 [i_9] [i_9] [i_7]) : (((/* implicit */int) arr_26 [i_7 + 3]))))), (((((/* implicit */_Bool) (short)-2)) ? (9890004057081236556ULL) : (((/* implicit */unsigned long long int) 8))))));
                    arr_31 [i_7] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) arr_14 [i_7 + 3])) * (max((((/* implicit */unsigned long long int) 281474976710652LL)), (var_10)))))) ? (((/* implicit */long long int) 70521209U)) : (144115188075855871LL)));
                }
            } 
        } 
        var_25 = ((/* implicit */unsigned long long int) min((var_25), (((/* implicit */unsigned long long int) min((max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) -1802821143))))), ((~(3679203227U))))), (((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) arr_28 [i_7 - 1] [i_7 - 3] [4LL])) != (9ULL)))))))));
    }
    for (unsigned int i_10 = 1; i_10 < 20; i_10 += 3) 
    {
        var_26 = ((/* implicit */int) (!(((/* implicit */_Bool) min((arr_14 [i_10 + 1]), (arr_14 [i_10 + 1]))))));
        /* LoopNest 2 */
        for (unsigned int i_11 = 0; i_11 < 21; i_11 += 3) 
        {
            for (unsigned char i_12 = 0; i_12 < 21; i_12 += 3) 
            {
                {
                    var_27 -= ((/* implicit */int) (+(max((max((4528859614256172649ULL), (((/* implicit */unsigned long long int) (short)-32765)))), (((/* implicit */unsigned long long int) arr_36 [8U] [i_10 - 1]))))));
                    arr_40 [i_12] [i_10] [i_12] = ((/* implicit */short) max((((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_38 [i_10])) ? (((/* implicit */int) (signed char)0)) : (((/* implicit */int) arr_22 [i_10 - 1]))))) * (17119837611666610648ULL))), (((/* implicit */unsigned long long int) ((unsigned char) max((1326906462042940968ULL), (((/* implicit */unsigned long long int) 1802821147))))))));
                    arr_41 [i_10] [(unsigned char)13] [i_12] [i_12] = ((/* implicit */signed char) min((((/* implicit */unsigned int) ((((((/* implicit */_Bool) (short)-5748)) ? (arr_28 [i_11] [i_11] [i_10]) : (((/* implicit */int) arr_27 [i_10] [i_11] [i_12])))) / (((((/* implicit */_Bool) -281474976710652LL)) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) arr_2 [i_10]))))))), (((arr_4 [i_12] [i_12] [i_11] [i_10 + 1]) * (((/* implicit */unsigned int) ((/* implicit */int) arr_25 [i_10])))))));
                }
            } 
        } 
        var_28 = ((/* implicit */unsigned long long int) ((long long int) ((((/* implicit */int) (unsigned char)255)) / (arr_33 [i_10] [i_10 - 1]))));
    }
}
