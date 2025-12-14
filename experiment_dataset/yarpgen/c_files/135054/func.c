/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135054
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135054 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135054
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
    var_15 = ((long long int) ((_Bool) (_Bool)0));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            for (long long int i_2 = 2; i_2 < 21; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 2; i_3 < 23; i_3 += 4) 
                    {
                        for (long long int i_4 = 0; i_4 < 24; i_4 += 3) 
                        {
                            {
                                arr_14 [i_0] [i_0] [1LL] = ((/* implicit */unsigned int) ((unsigned long long int) ((_Bool) ((((/* implicit */_Bool) (short)0)) ? (6089190835334189906ULL) : (6089190835334189906ULL)))));
                                var_16 += ((/* implicit */signed char) ((((_Bool) ((((/* implicit */_Bool) 2159332216743945607LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)51))) : (12357553238375361709ULL)))) ? (((unsigned long long int) ((unsigned short) (_Bool)1))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 12357553238375361709ULL)) ? (4824636000603576424LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))));
                                arr_15 [(_Bool)1] [i_1] [23] [i_1] &= ((short) ((((/* implicit */_Bool) ((unsigned short) (unsigned short)50613))) ? (((/* implicit */int) (unsigned short)65533)) : (((int) (unsigned char)205))));
                            }
                        } 
                    } 
                    var_17 ^= ((/* implicit */long long int) ((_Bool) ((unsigned short) ((_Bool) 16777152))));
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */_Bool) ((unsigned char) ((((/* implicit */_Bool) ((signed char) 12357553238375361720ULL))) ? (((((/* implicit */_Bool) (unsigned short)23605)) ? (16646144) : (((/* implicit */int) (unsigned short)2)))) : (((int) 16777152)))));
}
