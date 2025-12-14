/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168114
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168114 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168114
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
    var_12 = ((/* implicit */short) min((((((/* implicit */unsigned long long int) max((var_9), (((/* implicit */unsigned int) var_3))))) & (var_4))), (((/* implicit */unsigned long long int) (-(4294967295U))))));
    var_13 &= ((/* implicit */unsigned long long int) (signed char)-47);
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            {
                var_14 = ((/* implicit */signed char) max((var_14), (((/* implicit */signed char) ((((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) max((((/* implicit */short) (signed char)-47)), ((short)-12396)))) : (-598808384))) - (((((/* implicit */_Bool) (+(598808374)))) ? (max((((/* implicit */int) (signed char)-106)), (598808366))) : (((/* implicit */int) ((signed char) var_7))))))))));
                /* LoopNest 2 */
                for (long long int i_2 = 0; i_2 < 23; i_2 += 4) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 23; i_3 += 4) 
                    {
                        {
                            arr_9 [i_0] [i_1] [i_2] [i_3] |= ((/* implicit */_Bool) (unsigned short)0);
                            var_15 ^= ((/* implicit */int) arr_5 [i_0] [i_0]);
                            var_16 &= ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) == (((long long int) -598808384))))) - (var_2)));
                            var_17 = ((/* implicit */short) min((max((-2067007960), (((/* implicit */int) min((arr_3 [i_3] [i_1] [i_2]), ((unsigned short)65532)))))), (((/* implicit */int) ((((/* implicit */_Bool) min((var_2), (((/* implicit */int) arr_8 [i_0] [i_1] [i_1] [i_2] [i_2] [i_3]))))) && ((_Bool)1))))));
                        }
                    } 
                } 
                var_18 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((var_10), (((unsigned long long int) arr_7 [i_0] [i_1] [i_0]))))) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_4 [i_1]))));
                arr_10 [i_0] = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) ((((_Bool) 1339296676466378771LL)) ? ((+(((/* implicit */int) arr_5 [i_1] [i_0])))) : (((/* implicit */int) ((short) (_Bool)1)))))), (var_10)));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_4 = 1; i_4 < 16; i_4 += 2) 
    {
        for (unsigned long long int i_5 = 0; i_5 < 19; i_5 += 2) 
        {
            {
                var_19 = -330849884592335766LL;
                var_20 *= (-(arr_12 [i_4 - 1] [i_5]));
                var_21 &= ((((/* implicit */_Bool) min((((/* implicit */short) (_Bool)0)), (max((((/* implicit */short) (_Bool)1)), ((short)-18150)))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_15 [i_4 + 1] [i_5])) ? (var_0) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_4 + 3] [i_5])))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) var_3)))) : (max((((/* implicit */unsigned long long int) arr_13 [i_4 + 2] [i_5])), (arr_15 [i_5] [i_4 + 2]))))) : (((/* implicit */unsigned long long int) ((long long int) (_Bool)0))));
            }
        } 
    } 
}
