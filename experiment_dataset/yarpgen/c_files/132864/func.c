/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132864
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132864 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132864
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
    var_14 = ((/* implicit */signed char) var_6);
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        for (unsigned short i_1 = 1; i_1 < 20; i_1 += 2) 
        {
            {
                arr_4 [(_Bool)1] [i_1] = ((/* implicit */int) 13097154644238440817ULL);
                /* LoopSeq 2 */
                for (int i_2 = 1; i_2 < 20; i_2 += 3) /* same iter space */
                {
                    var_15 = ((/* implicit */signed char) ((unsigned char) 11558350584065286812ULL));
                    var_16 = ((/* implicit */int) ((((min((var_6), (-6536152136806990471LL))) + (((/* implicit */long long int) ((/* implicit */int) max((arr_1 [i_0] [8]), ((_Bool)1))))))) | (((/* implicit */long long int) (+(((/* implicit */int) (short)-9297)))))));
                }
                /* vectorizable */
                for (int i_3 = 1; i_3 < 20; i_3 += 3) /* same iter space */
                {
                    var_17 = ((/* implicit */signed char) 5349589429471110786ULL);
                    var_18 = ((/* implicit */long long int) ((short) ((((/* implicit */_Bool) (short)11618)) || (((/* implicit */_Bool) var_10)))));
                    var_19 = ((/* implicit */long long int) arr_7 [i_3 - 1] [i_0] [i_0] [i_0]);
                    var_20 = ((/* implicit */_Bool) ((signed char) (unsigned short)65521));
                }
                var_21 = ((signed char) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) ((_Bool) -7670081398201010232LL))) : (((((/* implicit */_Bool) -288863035)) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) var_11))))));
            }
        } 
    } 
}
