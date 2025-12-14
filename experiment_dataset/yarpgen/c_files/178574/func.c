/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178574
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178574 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178574
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
    var_15 = ((/* implicit */short) max(((+(((/* implicit */int) var_2)))), (((/* implicit */int) (!(((/* implicit */_Bool) var_14)))))));
    var_16 *= ((/* implicit */signed char) min((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_1))) - (-7915572885550068265LL))))))), (var_8)));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 3; i_1 < 9; i_1 += 2) 
        {
            {
                var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)77)) && (((/* implicit */_Bool) -1))));
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 12; i_2 += 2) 
                {
                    for (unsigned char i_3 = 4; i_3 < 9; i_3 += 1) 
                    {
                        {
                            arr_9 [i_3] = ((((/* implicit */unsigned long long int) -1235386312)) | (8191ULL));
                            var_18 = ((/* implicit */unsigned int) (((((~(arr_4 [i_0] [i_0]))) ^ (((/* implicit */unsigned long long int) ((((/* implicit */int) var_14)) | (((/* implicit */int) (_Bool)1))))))) | (((((/* implicit */_Bool) max((arr_2 [8U]), ((signed char)104)))) ? (var_4) : (((/* implicit */unsigned long long int) (~(var_7))))))));
                            var_19 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (~(((/* implicit */int) var_11)))))));
                            var_20 += ((/* implicit */unsigned short) arr_3 [i_1] [i_1]);
                        }
                    } 
                } 
            }
        } 
    } 
}
