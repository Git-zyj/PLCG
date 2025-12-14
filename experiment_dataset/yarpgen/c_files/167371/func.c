/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167371
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167371 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167371
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
    var_19 += ((/* implicit */signed char) 2045389008);
    var_20 = (+(min((((/* implicit */long long int) ((signed char) var_4))), (var_0))));
    var_21 &= ((/* implicit */int) ((((/* implicit */_Bool) ((6532806642437960768ULL) >> (((13592142794326047166ULL) - (13592142794326047142ULL)))))) ? (((((var_18) >> (((((/* implicit */int) var_16)) + (29624))))) >> (((((1061859338) >> (((var_8) - (12233548572292602910ULL))))) - (66366163))))) : (((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)-63))))) ? (((var_11) >> (((1187581953664206755ULL) - (1187581953664206720ULL))))) : (((/* implicit */unsigned long long int) min((((/* implicit */int) (short)-17336)), (1061859338))))))));
    var_22 = ((/* implicit */unsigned int) ((min((((/* implicit */unsigned long long int) (-(((/* implicit */int) var_16))))), (((12816194408637509051ULL) >> (((((/* implicit */int) (short)26086)) - (26052))))))) >> ((((((~(var_12))) << (((/* implicit */int) ((_Bool) 2190519866U))))) - (1884568846U)))));
    /* LoopNest 3 */
    for (signed char i_0 = 1; i_0 < 16; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_8 [i_2] [i_2] [i_1] [i_0 + 3] = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) arr_1 [i_2] [i_0])), ((+(arr_4 [i_0 + 3])))));
                    arr_9 [i_0 - 1] [i_2] [i_2] = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_1 [i_0 - 1] [i_0])) >> (((/* implicit */int) (_Bool)1)))))));
                    arr_10 [i_0] [i_0 + 3] [i_0 + 3] = ((/* implicit */_Bool) arr_5 [i_0]);
                }
            } 
        } 
    } 
}
