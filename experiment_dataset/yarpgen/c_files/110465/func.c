/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110465
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110465 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110465
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
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (long long int i_1 = 3; i_1 < 20; i_1 += 3) 
        {
            for (unsigned char i_2 = 4; i_2 < 19; i_2 += 2) 
            {
                {
                    arr_9 [i_0] = ((/* implicit */int) ((((5808719356045617477ULL) ^ (12638024717663934126ULL))) != (((/* implicit */unsigned long long int) max((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)39))) == (5808719356045617466ULL)))), (var_7))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 21; i_3 += 3) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 21; i_4 += 4) 
                        {
                            {
                                var_13 = ((/* implicit */unsigned short) (+(((/* implicit */int) ((((12638024717663934140ULL) >> (((12638024717663934149ULL) - (12638024717663934114ULL))))) > (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned short)28186))))))))));
                                var_14 = ((/* implicit */unsigned char) ((long long int) 14516076542568993694ULL));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */_Bool) 5808719356045617477ULL);
    var_16 = ((/* implicit */unsigned char) ((long long int) var_2));
    var_17 = ((/* implicit */short) (~((-(((/* implicit */int) (((_Bool)1) && (((/* implicit */_Bool) 5808719356045617488ULL)))))))));
}
