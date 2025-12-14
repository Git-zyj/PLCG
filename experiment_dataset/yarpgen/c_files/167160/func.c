/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167160
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167160 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167160
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
    var_19 = ((/* implicit */long long int) max((9915959126462736728ULL), (((/* implicit */unsigned long long int) (signed char)112))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            {
                arr_5 [i_0] [i_1] [13LL] = ((/* implicit */unsigned int) arr_3 [i_1]);
                var_20 = ((/* implicit */unsigned int) arr_3 [17U]);
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 23; i_2 += 2) 
                {
                    for (int i_3 = 0; i_3 < 25; i_3 += 1) 
                    {
                        {
                            var_21 += ((/* implicit */int) var_6);
                            var_22 = ((/* implicit */unsigned short) (signed char)-112);
                            arr_14 [i_0] [i_0] [i_2] [i_2] = ((/* implicit */long long int) ((unsigned long long int) min((((/* implicit */unsigned long long int) (~(((/* implicit */int) (signed char)-106))))), (min((5006436770658831823ULL), (((/* implicit */unsigned long long int) -373326773)))))));
                            var_23 = ((/* implicit */_Bool) (-(((/* implicit */int) (((~(15026771157862725074ULL))) > (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_0] [i_2])) ? (((/* implicit */int) var_17)) : (((/* implicit */int) (unsigned short)29932))))))))));
                            arr_15 [i_0] [i_2] [i_0] [i_0] = ((/* implicit */_Bool) arr_10 [i_0]);
                        }
                    } 
                } 
                var_24 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) min((((/* implicit */long long int) (signed char)-121)), (((long long int) (_Bool)0))))) >= (((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-105))) ^ ((-(18446744073709551611ULL)))))));
                var_25 = ((/* implicit */unsigned short) var_7);
            }
        } 
    } 
    /* LoopSeq 1 */
    for (long long int i_4 = 0; i_4 < 15; i_4 += 2) 
    {
        var_26 = ((unsigned long long int) (signed char)122);
        var_27 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (((~(arr_13 [i_4] [i_4] [i_4] [i_4] [(_Bool)1]))) << (((((((/* implicit */_Bool) arr_8 [15LL] [i_4])) ? (((/* implicit */unsigned long long int) arr_10 [i_4])) : (arr_4 [(unsigned char)23]))) - (2690898621ULL)))))) ? (15026771157862725074ULL) : (((((/* implicit */_Bool) ((arr_10 [i_4]) << (((901246178) - (901246169)))))) ? (((/* implicit */unsigned long long int) 1274693137)) : (arr_4 [i_4])))));
    }
    var_28 = ((/* implicit */signed char) min((var_28), (((/* implicit */signed char) (!(((/* implicit */_Bool) (signed char)122)))))));
    var_29 = max((((((/* implicit */_Bool) (short)23554)) ? (1335546070989506997ULL) : (((/* implicit */unsigned long long int) (((_Bool)0) ? (9) : (((/* implicit */int) (_Bool)0))))))), (((/* implicit */unsigned long long int) max((((var_13) & (((/* implicit */long long int) var_1)))), (((var_18) + (((/* implicit */long long int) 2964795750U))))))));
}
