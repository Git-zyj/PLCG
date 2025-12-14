/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17779
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17779 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17779
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
    /* LoopSeq 3 */
    for (short i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */int) (signed char)-82)) + (-1728873223)));
        arr_3 [i_0] = ((/* implicit */unsigned int) (signed char)103);
        var_19 = arr_1 [i_0] [i_0];
    }
    /* vectorizable */
    for (unsigned int i_1 = 0; i_1 < 10; i_1 += 2) 
    {
        arr_6 [i_1] [i_1] = ((/* implicit */unsigned int) (-(((/* implicit */int) var_0))));
        var_20 += ((/* implicit */unsigned int) arr_0 [i_1] [i_1]);
        var_21 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) 12680548288891742309ULL)) ? (((/* implicit */int) var_10)) : (arr_0 [i_1] [i_1])));
        var_22 = ((/* implicit */int) arr_1 [i_1] [i_1]);
        /* LoopSeq 1 */
        for (unsigned long long int i_2 = 2; i_2 < 9; i_2 += 4) 
        {
            /* LoopSeq 1 */
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                arr_12 [i_1] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -7720344102006483063LL)) ? (var_16) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_18)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) -6920397853203217633LL)) || (((/* implicit */_Bool) (signed char)43)))))) : (4611655478949654722ULL)));
                arr_13 [i_1] [i_2] [i_3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 7720344102006483048LL)) ? (arr_11 [i_1] [3ULL]) : (((/* implicit */int) (signed char)-86))))) ? (var_8) : (1368067278)));
                arr_14 [i_1] [i_2 + 1] = ((/* implicit */signed char) 10353795481857870606ULL);
                /* LoopNest 2 */
                for (signed char i_4 = 0; i_4 < 10; i_4 += 3) 
                {
                    for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
                    {
                        {
                            arr_19 [(signed char)4] [i_2] [i_5] [i_4] = ((/* implicit */int) ((((unsigned long long int) arr_9 [i_1])) << (((((/* implicit */_Bool) var_0)) ? (2ULL) : (9135407924898507815ULL)))));
                            arr_20 [i_4] [i_4] [i_4] [i_5] [i_5 - 1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(-963286715)))) ? (var_7) : (arr_16 [i_2 - 2] [i_2 + 1] [i_5 - 1] [i_5 - 1])));
                        }
                    } 
                } 
            }
            var_23 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_18)) ? (((((/* implicit */_Bool) 2458885879048915208ULL)) ? (((/* implicit */unsigned long long int) -2LL)) : (12680548288891742309ULL))) : (((/* implicit */unsigned long long int) ((((((/* implicit */int) var_18)) + (2147483647))) << (((16299255145048293402ULL) - (16299255145048293402ULL))))))));
            arr_21 [i_1] [i_1] [i_1] = ((/* implicit */long long int) var_18);
        }
    }
    for (long long int i_6 = 0; i_6 < 23; i_6 += 1) 
    {
        /* LoopNest 2 */
        for (int i_7 = 1; i_7 < 22; i_7 += 1) 
        {
            for (unsigned int i_8 = 2; i_8 < 22; i_8 += 1) 
            {
                {
                    arr_30 [i_7] [i_7] [i_8] = ((/* implicit */short) (-(((/* implicit */int) var_9))));
                    var_24 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_9))))) ? (((((/* implicit */_Bool) (signed char)-89)) ? (((/* implicit */int) arr_26 [i_7])) : (((/* implicit */int) (_Bool)0)))) : (((arr_26 [i_7]) ? (((/* implicit */int) (signed char)-109)) : (var_11)))));
                }
            } 
        } 
        arr_31 [i_6] [i_6] = ((/* implicit */unsigned long long int) var_17);
        var_25 = ((/* implicit */int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (2147483647) : (((/* implicit */int) var_17))))) ? (17349312159670719088ULL) : (((/* implicit */unsigned long long int) min((1060317568), (((/* implicit */int) var_18))))))) << (((max((((/* implicit */unsigned long long int) var_4)), (arr_22 [i_6] [i_6]))) - (18446744073709551457ULL)))));
        arr_32 [i_6] = ((/* implicit */unsigned int) ((var_1) <= (max((((/* implicit */unsigned long long int) 2261022145U)), (18446744073709551613ULL)))));
    }
    var_26 = ((/* implicit */unsigned long long int) ((signed char) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (var_6)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (18076675464668420027ULL))));
}
