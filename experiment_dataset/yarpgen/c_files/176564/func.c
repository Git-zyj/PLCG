/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176564
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176564 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176564
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
    var_16 |= ((/* implicit */short) (!(((/* implicit */_Bool) (+((~(((/* implicit */int) (signed char)43)))))))));
    var_17 = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) 398943210018236078LL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)11268))))) ? (((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)22339))))) : (var_3)))));
    var_18 = ((/* implicit */short) ((((/* implicit */_Bool) 3359269993636949759ULL)) ? ((~(max((((/* implicit */long long int) (short)-4879)), (-273722959166663762LL))))) : (((/* implicit */long long int) ((/* implicit */int) var_7)))));
    /* LoopNest 2 */
    for (long long int i_0 = 2; i_0 < 17; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 20; i_2 += 4) 
                {
                    for (short i_3 = 4; i_3 < 17; i_3 += 2) 
                    {
                        {
                            var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 273722959166663760LL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */int) max(((short)-10217), ((short)17324)))) ^ (((/* implicit */int) min(((_Bool)1), ((_Bool)1)))))) : (((/* implicit */int) ((((/* implicit */_Bool) (short)-11255)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) 134217216U)) ? (((/* implicit */int) (unsigned char)201)) : (((/* implicit */int) (_Bool)1))))))))));
                            var_20 &= ((/* implicit */short) max((((/* implicit */unsigned long long int) max(((~(529624994198553965LL))), (((/* implicit */long long int) (unsigned char)103))))), ((((!(((/* implicit */_Bool) (short)11268)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -273722959166663752LL)) ? (-273722959166663740LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))) : (((((/* implicit */_Bool) (short)(-32767 - 1))) ? (18446744073709551615ULL) : (3365531292947259302ULL)))))));
                            var_21 = ((/* implicit */long long int) max((var_21), (((/* implicit */long long int) (signed char)18))));
                        }
                    } 
                } 
                var_22 = ((/* implicit */unsigned long long int) max((var_22), (((/* implicit */unsigned long long int) (+(min((((/* implicit */long long int) (short)-32741)), (-3625848397724399905LL))))))));
                arr_12 [i_0 + 3] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) min((4632192628467443916LL), (741377514731124394LL)))))))) != (1324405274595882737ULL)));
                arr_13 [i_1] [i_0] = ((/* implicit */signed char) (+(((/* implicit */int) max(((_Bool)1), ((_Bool)1))))));
            }
        } 
    } 
}
