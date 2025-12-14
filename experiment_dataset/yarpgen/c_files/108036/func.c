/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108036
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108036 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108036
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
    var_14 = ((/* implicit */_Bool) ((unsigned char) (unsigned char)165));
    var_15 = ((/* implicit */int) (_Bool)1);
    /* LoopNest 2 */
    for (unsigned short i_0 = 2; i_0 < 20; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 21; i_2 += 2) 
                {
                    for (unsigned char i_3 = 1; i_3 < 21; i_3 += 1) 
                    {
                        {
                            var_16 ^= ((/* implicit */int) ((((/* implicit */_Bool) max(((unsigned char)69), ((unsigned char)69)))) ? (((/* implicit */unsigned long long int) max((4294967292U), (2988423586U)))) : (15269928617489295495ULL)));
                            var_17 += ((/* implicit */signed char) 1547650531063540526LL);
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (short i_4 = 4; i_4 < 20; i_4 += 2) 
                {
                    for (signed char i_5 = 3; i_5 < 19; i_5 += 2) 
                    {
                        {
                            var_18 = min((((/* implicit */unsigned int) ((((/* implicit */_Bool) 3697925175U)) ? (((/* implicit */int) (unsigned char)192)) : (((/* implicit */int) arr_8 [i_5 + 3] [i_4 - 1] [i_0 - 1] [i_5]))))), (((((/* implicit */_Bool) -346185203)) ? (((unsigned int) 9019378680167930551LL)) : (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)186))) & (4294967292U))))));
                            arr_15 [i_5] [i_5] = ((/* implicit */unsigned char) arr_10 [i_0 - 2] [i_1] [i_4]);
                        }
                    } 
                } 
                var_19 = ((/* implicit */_Bool) (unsigned char)74);
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) (~(((/* implicit */int) (short)-16715))))) | (((unsigned long long int) (+(((/* implicit */int) var_7)))))));
}
