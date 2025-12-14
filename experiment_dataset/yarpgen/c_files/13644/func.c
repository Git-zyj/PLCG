/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13644
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13644 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13644
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
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        for (unsigned short i_1 = 1; i_1 < 21; i_1 += 2) 
        {
            {
                /* LoopNest 3 */
                for (unsigned short i_2 = 1; i_2 < 23; i_2 += 2) 
                {
                    for (short i_3 = 0; i_3 < 24; i_3 += 3) 
                    {
                        for (short i_4 = 0; i_4 < 24; i_4 += 3) 
                        {
                            {
                                var_12 &= ((/* implicit */int) ((short) (+((-(((/* implicit */int) (_Bool)1)))))));
                                var_13 ^= ((/* implicit */unsigned short) max((((short) -432588036959380766LL)), ((short)333)));
                                var_14 = ((/* implicit */short) max((var_14), (((/* implicit */short) (!((((_Bool)1) && ((_Bool)1))))))));
                                var_15 = ((/* implicit */unsigned long long int) max((var_15), (((/* implicit */unsigned long long int) (~((~(((arr_12 [i_1 + 1] [i_1 + 1] [16U] [0LL]) ^ (3146590746U))))))))));
                                var_16 &= ((/* implicit */int) ((unsigned int) (unsigned short)18302));
                            }
                        } 
                    } 
                } 
                var_17 -= ((((/* implicit */_Bool) max((arr_11 [i_0] [i_1 - 1] [i_0]), (((/* implicit */unsigned char) arr_4 [i_1 - 1] [i_1 - 1] [i_0]))))) || (((/* implicit */_Bool) ((signed char) max((((/* implicit */unsigned long long int) var_5)), (arr_2 [i_1]))))));
                var_18 ^= ((/* implicit */long long int) (+(((/* implicit */int) ((((((/* implicit */int) (_Bool)1)) == (((/* implicit */int) (unsigned char)16)))) && (((/* implicit */_Bool) max((-1913679339102541634LL), (((/* implicit */long long int) arr_1 [i_0]))))))))));
            }
        } 
    } 
    var_19 = ((((max((var_11), ((_Bool)1))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (-1913679339102541648LL) : (-1913679339102541634LL)))))) ? (((/* implicit */int) (_Bool)1)) : ((+((~(var_8))))));
}
