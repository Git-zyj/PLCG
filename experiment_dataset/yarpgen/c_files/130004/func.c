/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130004
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130004 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130004
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
    var_13 = ((/* implicit */int) var_7);
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        for (signed char i_1 = 2; i_1 < 13; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (short i_2 = 0; i_2 < 17; i_2 += 3) 
                {
                    for (short i_3 = 0; i_3 < 17; i_3 += 2) 
                    {
                        {
                            var_14 = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) var_12)) ? (var_11) : (((/* implicit */long long int) ((/* implicit */int) (short)9658)))))))) ? (((/* implicit */int) var_12)) : (((/* implicit */int) (short)3453))));
                            var_15 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) (short)-3454))))) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_9))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_2))))) && (((/* implicit */_Bool) max(((short)3453), (((/* implicit */short) var_9))))))))) : (((((/* implicit */_Bool) 8104776881035179625ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : ((-(0ULL)))))));
                        }
                    } 
                } 
                var_16 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)3447))) & (((((/* implicit */unsigned long long int) ((/* implicit */int) (short)3447))) | (8104776881035179631ULL)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) (short)3453)))) : ((((_Bool)1) ? ((~(10341967192674371981ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)16)))))));
            }
        } 
    } 
}
