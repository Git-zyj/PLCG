/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107955
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107955 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107955
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
    for (unsigned short i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        var_10 = ((/* implicit */int) (((!(((/* implicit */_Bool) (~(arr_1 [i_0])))))) ? (((((/* implicit */_Bool) 1123355341)) ? (90052780U) : (max((((/* implicit */unsigned int) arr_0 [i_0])), (90052809U))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_0 [i_0])))))));
        var_11 *= ((/* implicit */long long int) ((_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned short)65534))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65535))) * (var_5))))));
        var_12 = ((/* implicit */int) ((((/* implicit */unsigned long long int) 4204914489U)) | (5427033957077013347ULL)));
        var_13 = ((/* implicit */_Bool) max((var_13), (((/* implicit */_Bool) (((-((+(810877313710959596LL))))) / (((/* implicit */long long int) arr_1 [(_Bool)1])))))));
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 17; i_2 += 4) 
            {
                {
                    var_14 ^= ((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)65524))));
                    /* LoopSeq 1 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        var_15 = ((unsigned long long int) max(((+(11340889))), (((/* implicit */int) (unsigned short)31))));
                        var_16 ^= ((/* implicit */unsigned long long int) ((_Bool) min((4204914493U), (((/* implicit */unsigned int) (_Bool)0)))));
                        var_17 = ((/* implicit */int) ((long long int) min((((/* implicit */unsigned long long int) (+(var_3)))), (13019710116632538269ULL))));
                    }
                }
            } 
        } 
    }
    for (unsigned long long int i_4 = 0; i_4 < 16; i_4 += 2) 
    {
        /* LoopSeq 3 */
        /* vectorizable */
        for (short i_5 = 0; i_5 < 16; i_5 += 1) 
        {
            var_18 ^= (-(var_0));
            arr_13 [i_5] = ((/* implicit */long long int) (-((-(90052766U)))));
        }
        for (unsigned int i_6 = 0; i_6 < 16; i_6 += 4) 
        {
            /* LoopSeq 2 */
            for (unsigned long long int i_7 = 0; i_7 < 16; i_7 += 3) 
            {
                arr_18 [i_7] [i_7] = ((/* implicit */unsigned int) ((unsigned long long int) (-(((/* implicit */int) arr_10 [i_4])))));
                var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) -2102097657)) ? (8191U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65519)))));
            }
            for (unsigned long long int i_8 = 4; i_8 < 14; i_8 += 4) 
            {
                var_20 |= ((int) ((((/* implicit */_Bool) (-(2603903887300130603LL)))) ? (arr_5 [i_8 - 4]) : (((/* implicit */int) ((((/* implicit */int) (unsigned short)16)) <= (((/* implicit */int) arr_17 [i_4])))))));
                var_21 = ((/* implicit */unsigned short) ((unsigned long long int) 90052803U));
                arr_21 [i_6] [i_6] [i_8 - 3] [i_4] = ((/* implicit */_Bool) max((((unsigned short) ((((/* implicit */_Bool) arr_16 [i_4] [i_4] [i_4])) ? (arr_19 [i_4] [i_4] [i_8]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_8])))))), (((/* implicit */unsigned short) (((!(((/* implicit */_Bool) arr_16 [i_4] [i_4] [i_8])))) || (((/* implicit */_Bool) arr_8 [i_4] [i_4] [i_4] [i_4] [i_4])))))));
                var_22 = ((/* implicit */unsigned char) min((var_22), (((/* implicit */unsigned char) (+((~(((/* implicit */int) arr_9 [i_4] [i_6])))))))));
            }
            var_23 ^= ((/* implicit */long long int) (!(((/* implicit */_Bool) max((((/* implicit */int) arr_6 [i_4] [i_6] [i_4])), (arr_5 [i_4]))))));
        }
        for (unsigned int i_9 = 0; i_9 < 16; i_9 += 1) 
        {
            /* LoopNest 2 */
            for (unsigned long long int i_10 = 0; i_10 < 16; i_10 += 3) 
            {
                for (long long int i_11 = 0; i_11 < 16; i_11 += 1) 
                {
                    {
                        var_24 = ((unsigned short) ((((/* implicit */_Bool) arr_29 [i_4] [i_4] [i_9] [i_11])) ? (((/* implicit */unsigned int) ((((/* implicit */int) arr_11 [i_4])) << (((16777215) - (16777207)))))) : ((+(var_2)))));
                        var_25 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (max((arr_2 [10] [i_9] [i_11]), (((/* implicit */unsigned long long int) (_Bool)1)))) : (((/* implicit */unsigned long long int) (-(arr_4 [i_4] [i_10] [i_4]))))));
                        var_26 = ((/* implicit */unsigned short) min((var_26), (((/* implicit */unsigned short) (~((-(((/* implicit */int) (_Bool)1)))))))));
                    }
                } 
            } 
            var_27 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (signed char)-110)) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_20 [i_4])))))))) ? (((/* implicit */int) ((short) arr_3 [i_4] [i_4] [i_9]))) : (max(((~(((/* implicit */int) (short)-20395)))), (((/* implicit */int) arr_15 [i_4] [i_4] [i_9]))))));
            var_28 = ((/* implicit */unsigned int) min((var_28), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) 0)))))));
            arr_30 [i_9] [i_9] = ((/* implicit */unsigned char) (-((-(((/* implicit */int) ((short) arr_19 [i_4] [i_9] [i_4])))))));
        }
        var_29 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_1))));
        arr_31 [i_4] [i_4] = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_20 [i_4]))))), (((unsigned long long int) arr_11 [i_4]))));
        var_30 += ((/* implicit */_Bool) (~((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (-810877313710959614LL)))));
    }
    var_31 += ((/* implicit */long long int) (+(var_5)));
}
