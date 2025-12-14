/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168228
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168228 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168228
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
    var_18 = ((/* implicit */unsigned char) ((((/* implicit */int) (_Bool)1)) <= (((/* implicit */int) (_Bool)1))));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            for (unsigned char i_2 = 0; i_2 < 14; i_2 += 3) 
            {
                {
                    var_19 = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-14287)) ? (((/* implicit */int) (short)14295)) : (((/* implicit */int) (short)14286))))) ? (((((/* implicit */_Bool) (short)-2243)) ? (((/* implicit */int) (short)1417)) : (((/* implicit */int) (unsigned short)65532)))) : (((int) (unsigned char)141))))), (((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) 823333160U)), (12454833928225195609ULL)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1039634230U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)14285))) : (717633442U)))) : (((((/* implicit */_Bool) 244977730U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)168))) : (9128027884028496197ULL)))))));
                    var_20 *= ((/* implicit */unsigned long long int) (short)-14285);
                    arr_6 [i_0] [i_0] [i_1] = ((/* implicit */unsigned long long int) (short)-14295);
                    arr_7 [(unsigned char)6] [i_1] [i_1] [i_0] = ((/* implicit */signed char) 7099254494652895637LL);
                    arr_8 [i_1] [i_1] [i_1] = ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-14286)) && ((_Bool)1)))), (0ULL)))) || (((/* implicit */_Bool) 12454833928225195585ULL)));
                }
            } 
        } 
    } 
}
