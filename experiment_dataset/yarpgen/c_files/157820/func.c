/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157820
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157820 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157820
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
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (signed char i_1 = 2; i_1 < 19; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 21; i_2 += 4) 
            {
                {
                    var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 18014263124934383564ULL)) ? (arr_3 [i_0] [i_1 + 1]) : (((/* implicit */long long int) ((/* implicit */int) (signed char)62)))))) ? (min((-5768249510002850752LL), (((/* implicit */long long int) 1006632960U)))) : (max((((/* implicit */long long int) (unsigned char)214)), ((((_Bool)1) ? (arr_5 [i_0] [i_0] [i_2] [i_2]) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-51)))))))));
                    arr_7 [i_0] [i_2] = ((/* implicit */signed char) ((((arr_6 [i_0]) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_7)))) & (((/* implicit */int) min(((signed char)62), (((/* implicit */signed char) arr_6 [i_0])))))));
                }
            } 
        } 
        /* LoopSeq 1 */
        for (signed char i_3 = 0; i_3 < 21; i_3 += 2) 
        {
            /* LoopSeq 2 */
            for (short i_4 = 1; i_4 < 20; i_4 += 4) 
            {
                var_21 |= ((/* implicit */_Bool) min((((/* implicit */int) (signed char)(-127 - 1))), ((-(((/* implicit */int) (signed char)62))))));
                var_22 = ((/* implicit */unsigned short) ((8254497529751138541ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) min(((unsigned char)42), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_2 [i_0] [i_0])))))))))));
            }
            for (unsigned long long int i_5 = 0; i_5 < 21; i_5 += 4) 
            {
                /* LoopSeq 1 */
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                {
                    var_23 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(arr_1 [i_0])))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-62))) | (1138886220091062364ULL))) : (((/* implicit */unsigned long long int) ((var_12) ^ (144115188075855872LL))))))) && (((/* implicit */_Bool) min((arr_1 [i_0]), (((/* implicit */unsigned long long int) var_19)))))));
                    arr_21 [(signed char)12] [i_3] [(signed char)12] [i_6] = ((/* implicit */unsigned char) (+((-(((((/* implicit */_Bool) arr_13 [i_3])) ? (((/* implicit */unsigned long long int) var_3)) : (arr_1 [i_3])))))));
                }
                /* LoopSeq 1 */
                for (signed char i_7 = 3; i_7 < 19; i_7 += 4) 
                {
                    var_24 += ((/* implicit */signed char) min((((/* implicit */unsigned short) ((((/* implicit */int) arr_9 [i_7 + 2] [i_7 + 2])) > (((/* implicit */int) arr_9 [i_7 - 2] [i_7 + 2]))))), (arr_19 [i_3] [i_0] [i_3] [i_3] [i_3])));
                    /* LoopSeq 1 */
                    for (unsigned char i_8 = 0; i_8 < 21; i_8 += 4) 
                    {
                        var_25 = ((/* implicit */_Bool) 18014263124934383565ULL);
                        arr_26 [i_0] [i_0] [i_0] [i_0] [i_0] [i_7] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) min(((signed char)54), (var_9)))), ((-(var_17)))))) ? (((var_5) ? ((~(((/* implicit */int) arr_15 [i_0] [i_7] [10LL])))) : (((/* implicit */int) (signed char)-79)))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_3] [i_5])))))));
                    }
                    var_26 = ((/* implicit */_Bool) 18014263124934383561ULL);
                    arr_27 [i_7] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)-44)) * (((/* implicit */int) arr_22 [i_7 - 1] [i_7 + 1] [i_7 + 2]))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_22 [i_7 + 1] [i_7 - 1] [i_7 + 2])) ? (((/* implicit */int) (short)-16384)) : (((/* implicit */int) var_15))))) : (18014263124934383588ULL)));
                }
                arr_28 [i_5] [i_0] [i_0] = ((/* implicit */_Bool) min((10039012198903557298ULL), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_10 [i_3] [i_5])) ? (-4562518286304510121LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)18))))))));
                arr_29 [i_0] [i_0] = ((/* implicit */signed char) max((((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_19 [i_0] [i_3] [i_3] [i_5] [i_5])) : (((/* implicit */int) arr_19 [i_3] [i_3] [i_5] [i_5] [i_3]))))), (min((var_3), (((/* implicit */long long int) arr_19 [i_0] [i_3] [i_3] [i_5] [i_3]))))));
                /* LoopNest 2 */
                for (signed char i_9 = 0; i_9 < 21; i_9 += 3) 
                {
                    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                    {
                        {
                            var_27 ^= var_5;
                            var_28 = ((/* implicit */_Bool) arr_0 [i_5]);
                            var_29 += ((/* implicit */unsigned short) ((short) min((((/* implicit */unsigned long long int) (unsigned char)110)), (((((/* implicit */unsigned long long int) 3969135913761432456LL)) & (var_0))))));
                        }
                    } 
                } 
            }
            arr_34 [i_0] = ((/* implicit */long long int) ((((arr_16 [i_0] [i_0] [i_0]) || (arr_16 [i_3] [i_0] [i_0]))) ? ((-(((/* implicit */int) arr_16 [i_0] [i_3] [i_0])))) : (((/* implicit */int) min((arr_16 [i_0] [i_0] [i_3]), (arr_16 [i_0] [i_0] [i_3]))))));
            var_30 = ((/* implicit */short) ((var_4) || (((_Bool) 432480948775168040ULL))));
        }
        var_31 = min((((/* implicit */unsigned long long int) (signed char)-69)), (((((/* implicit */_Bool) min((arr_30 [(short)11] [i_0] [i_0] [i_0]), (arr_15 [i_0] [i_0] [i_0])))) ? (min((432480948775168060ULL), (((/* implicit */unsigned long long int) arr_17 [i_0] [i_0] [i_0])))) : (((/* implicit */unsigned long long int) arr_3 [i_0] [i_0])))));
    }
    var_32 = min((((/* implicit */unsigned long long int) (signed char)(-127 - 1))), (min((((/* implicit */unsigned long long int) (_Bool)1)), (432480948775168048ULL))));
    var_33 = ((/* implicit */short) ((signed char) var_1));
    /* LoopNest 2 */
    for (short i_11 = 0; i_11 < 19; i_11 += 4) 
    {
        for (unsigned short i_12 = 0; i_12 < 19; i_12 += 3) 
        {
            {
                var_34 = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) (-(min((((/* implicit */long long int) arr_33 [2U] [2U] [i_12])), (arr_3 [i_12] [i_12])))))), (3992314331605874754ULL)));
                var_35 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)-104))))) == (2156052671320993240ULL)));
                arr_40 [i_11] [(unsigned char)17] = ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (unsigned char)230)), (arr_37 [i_12])))) ? (min((((/* implicit */unsigned long long int) arr_19 [i_11] [i_12] [i_12] [i_11] [i_11])), (18014263124934383565ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((((/* implicit */_Bool) arr_39 [i_11] [i_11])) ? (((/* implicit */int) (signed char)100)) : (((/* implicit */int) arr_19 [i_11] [i_12] [i_11] [i_11] [i_11])))) <= (((/* implicit */int) var_19)))))));
            }
        } 
    } 
}
