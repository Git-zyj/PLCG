/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149757
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149757 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149757
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
    var_13 = ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */short) (unsigned char)176)), ((short)0))))))) : (((((/* implicit */_Bool) (short)0)) ? ((+(((/* implicit */int) var_8)))) : (((/* implicit */int) var_11)))));
    var_14 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (~(((/* implicit */int) var_3))))), (((unsigned long long int) var_12))))) ? (((/* implicit */unsigned long long int) min((min((-5181337600497369843LL), (((/* implicit */long long int) (short)9)))), (((/* implicit */long long int) ((_Bool) (short)28464)))))) : (((((((/* implicit */_Bool) (short)-22654)) ? (12889983547990358759ULL) : (((/* implicit */unsigned long long int) 2147483633)))) + (var_12)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (unsigned char i_2 = 0; i_2 < 21; i_2 += 2) 
                {
                    for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
                    {
                        {
                            var_15 *= ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)87))) | (4462637487722833835LL));
                            var_16 = ((/* implicit */unsigned short) min((var_16), (((/* implicit */unsigned short) min((((/* implicit */unsigned int) (!(((((/* implicit */long long int) 1907755292U)) <= (-4462637487722833835LL)))))), (4030821126U))))));
                            var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (15510524239923704288ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_3] [i_3 + 1])))))) ? (((/* implicit */int) arr_6 [i_3] [i_3 + 1])) : (((/* implicit */int) min((((/* implicit */short) var_5)), (arr_0 [i_0]))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (signed char i_4 = 4; i_4 < 19; i_4 += 4) 
                {
                    for (signed char i_5 = 0; i_5 < 21; i_5 += 4) 
                    {
                        {
                            arr_14 [i_0] [i_0] [i_4] [i_0] = ((/* implicit */long long int) min((((((/* implicit */_Bool) arr_6 [i_0] [i_0])) ? (((/* implicit */int) min((((/* implicit */short) var_8)), (arr_0 [i_0])))) : (-2147483632))), (((/* implicit */int) var_8))));
                            arr_15 [i_0] [i_0] [i_5] = ((/* implicit */signed char) ((((/* implicit */_Bool) 15510524239923704276ULL)) ? (((/* implicit */long long int) 1744587200U)) : (4462637487722833835LL)));
                        }
                    } 
                } 
            }
        } 
    } 
}
