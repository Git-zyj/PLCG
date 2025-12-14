/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13836
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13836 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13836
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
    var_15 = ((/* implicit */long long int) var_13);
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            {
                /* LoopNest 3 */
                for (long long int i_2 = 0; i_2 < 19; i_2 += 2) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 19; i_3 += 4) 
                    {
                        for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_16 &= ((/* implicit */short) ((unsigned char) 4552786711608273111ULL));
                                var_17 = ((/* implicit */unsigned long long int) (short)26525);
                            }
                        } 
                    } 
                } 
                var_18 = ((/* implicit */_Bool) max((var_18), (((/* implicit */_Bool) max((((arr_5 [i_0] [i_1]) << (((/* implicit */int) (_Bool)1)))), (((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */short) (_Bool)0)), ((short)-1)))) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) var_6))))))))));
                arr_15 [i_0] [i_1] = ((/* implicit */short) (~((~(((/* implicit */int) (short)14502))))));
                var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(arr_13 [i_0] [i_0] [i_0] [i_0] [9LL])))) ? ((~(arr_13 [i_1] [i_1] [i_0] [i_0] [i_0]))) : (((/* implicit */long long int) (~(((/* implicit */int) (unsigned char)202)))))));
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned short) (+(((((/* implicit */int) var_10)) << (((((((/* implicit */_Bool) -7155389006458734814LL)) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) var_0))))) - (5439470734169170549LL)))))));
}
