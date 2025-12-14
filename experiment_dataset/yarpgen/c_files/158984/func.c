/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158984
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158984 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158984
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
    var_15 = ((/* implicit */long long int) max((var_15), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((13LL) % (3LL))) / (((/* implicit */long long int) ((/* implicit */int) var_4)))))) ? (((/* implicit */int) ((min((12853050891165736213ULL), (12853050891165736213ULL))) == (((/* implicit */unsigned long long int) ((((/* implicit */int) var_13)) | (((/* implicit */int) (signed char)102)))))))) : (((/* implicit */int) min(((short)8191), (((/* implicit */short) (signed char)-108))))))))));
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            for (unsigned int i_2 = 0; i_2 < 14; i_2 += 4) 
            {
                {
                    var_16 *= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) ((((int) 18446744073709551593ULL)) >= (((/* implicit */int) arr_0 [i_0])))))) : (((((/* implicit */long long int) ((/* implicit */int) (signed char)-118))) + (max((((/* implicit */long long int) arr_8 [i_0] [i_2])), (7126681794163567197LL)))))));
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 14; i_3 += 3) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 14; i_4 += 3) 
                        {
                            {
                                arr_15 [i_0] [i_3] [i_2] [i_3] [i_4] = ((/* implicit */unsigned short) arr_9 [i_0] [i_1] [i_2] [i_3] [i_3] [i_4]);
                                var_17 = ((/* implicit */unsigned long long int) min((var_17), (((((/* implicit */unsigned long long int) 4235652731490608335LL)) | (((((/* implicit */_Bool) -8943627310138135144LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-32752))) : (12853050891165736229ULL)))))));
                            }
                        } 
                    } 
                    arr_16 [i_0] = ((/* implicit */int) min((((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) min((7126681794163567197LL), (((/* implicit */long long int) -2094319760))))) != (max((((/* implicit */unsigned long long int) 8388607)), (17692353271945333803ULL)))))), (min((arr_4 [i_0] [i_1] [i_2]), (((/* implicit */unsigned long long int) (unsigned short)0))))));
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */int) max((((/* implicit */short) var_0)), (min(((short)-8204), (((/* implicit */short) (signed char)2))))));
}
