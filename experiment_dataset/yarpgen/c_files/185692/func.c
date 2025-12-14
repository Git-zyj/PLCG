/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185692
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185692 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185692
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
    var_20 = ((/* implicit */int) ((((((/* implicit */_Bool) max((-5777933133880509961LL), (((/* implicit */long long int) var_16))))) || (((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) var_4)))))) && ((!(((/* implicit */_Bool) var_1))))));
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 22; i_0 += 2) /* same iter space */
    {
        /* LoopSeq 2 */
        for (long long int i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            arr_5 [i_0] = ((/* implicit */unsigned short) (+(min((((var_13) | (((/* implicit */int) (_Bool)1)))), (((((/* implicit */int) var_11)) ^ (((/* implicit */int) (unsigned short)33779))))))));
            var_21 = ((/* implicit */long long int) max((var_21), (((/* implicit */long long int) var_13))));
        }
        for (unsigned long long int i_2 = 0; i_2 < 22; i_2 += 2) 
        {
            var_22 ^= ((/* implicit */unsigned char) var_0);
            /* LoopNest 2 */
            for (long long int i_3 = 0; i_3 < 22; i_3 += 1) 
            {
                for (short i_4 = 0; i_4 < 22; i_4 += 4) 
                {
                    {
                        var_23 = ((/* implicit */int) min((var_23), (((((/* implicit */_Bool) ((((((/* implicit */_Bool) (short)-26363)) ? (834576606) : (-834576607))) + ((~(((/* implicit */int) arr_2 [i_0] [i_0]))))))) ? (((/* implicit */int) min((((((/* implicit */_Bool) arr_9 [i_0] [i_2] [(unsigned char)17])) && (((/* implicit */_Bool) arr_1 [i_4])))), (((((/* implicit */_Bool) arr_10 [10] [10] [5ULL] [i_3] [10])) || (arr_6 [i_0])))))) : (((/* implicit */int) ((((/* implicit */_Bool) var_6)) && (((/* implicit */_Bool) max((arr_7 [i_3] [i_2] [i_0]), (((/* implicit */unsigned short) var_7))))))))))));
                        arr_14 [(_Bool)1] [i_3] [i_4] = ((/* implicit */signed char) ((((/* implicit */int) ((-834576606) < (((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) arr_8 [i_3]))))))) * (((/* implicit */int) arr_8 [i_0]))));
                    }
                } 
            } 
        }
        arr_15 [i_0] [13LL] = ((/* implicit */unsigned long long int) ((((var_8) ^ (((/* implicit */int) arr_2 [i_0] [i_0])))) != (((/* implicit */int) ((arr_9 [i_0] [i_0] [i_0]) < (((/* implicit */unsigned int) max((var_10), (((/* implicit */int) arr_7 [i_0] [7U] [i_0]))))))))));
        arr_16 [17LL] = ((/* implicit */short) (_Bool)1);
        var_24 = ((/* implicit */int) ((((/* implicit */unsigned int) (+(((((/* implicit */_Bool) var_7)) ? (-1739803985) : (((/* implicit */int) (unsigned char)130))))))) / (min((arr_12 [3ULL] [(signed char)9] [i_0] [i_0]), (arr_12 [i_0] [i_0] [i_0] [i_0])))));
    }
    /* vectorizable */
    for (signed char i_5 = 0; i_5 < 22; i_5 += 2) /* same iter space */
    {
        arr_19 [i_5] [i_5] = ((/* implicit */short) (!(((((/* implicit */_Bool) (unsigned short)0)) || (((/* implicit */_Bool) arr_17 [19U]))))));
        /* LoopNest 3 */
        for (unsigned int i_6 = 1; i_6 < 21; i_6 += 4) 
        {
            for (signed char i_7 = 2; i_7 < 21; i_7 += 4) 
            {
                for (long long int i_8 = 0; i_8 < 22; i_8 += 1) 
                {
                    {
                        var_25 = ((/* implicit */long long int) var_15);
                        var_26 = ((/* implicit */_Bool) ((((/* implicit */long long int) ((((/* implicit */int) var_2)) | (((/* implicit */int) (unsigned char)15))))) | (arr_13 [i_5] [i_5] [i_7] [i_7 - 1])));
                        arr_29 [i_6] = ((/* implicit */unsigned char) ((((/* implicit */int) ((var_18) >= (((/* implicit */int) var_7))))) << (((((/* implicit */int) arr_2 [i_7 - 1] [i_6 - 1])) - (70)))));
                    }
                } 
            } 
        } 
        var_27 += ((/* implicit */unsigned char) ((1739804000) * (((((/* implicit */int) arr_7 [i_5] [10LL] [i_5])) / (var_17)))));
    }
    /* LoopNest 3 */
    for (int i_9 = 0; i_9 < 15; i_9 += 1) 
    {
        for (short i_10 = 0; i_10 < 15; i_10 += 1) 
        {
            for (signed char i_11 = 0; i_11 < 15; i_11 += 3) 
            {
                {
                    arr_37 [8LL] [8U] [(unsigned char)4] [i_11] &= ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_7))) > (arr_13 [i_11] [i_10] [i_11] [i_10]))))) & ((((+(var_15))) ^ (((/* implicit */unsigned int) (+(var_10)))))));
                    arr_38 [i_9] [i_9] = ((/* implicit */short) (-(((((/* implicit */int) var_11)) << ((((+(var_13))) - (570074627)))))));
                }
            } 
        } 
    } 
    var_28 = ((/* implicit */_Bool) var_12);
}
