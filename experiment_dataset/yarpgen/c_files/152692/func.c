/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152692
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152692 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152692
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
    var_15 |= ((/* implicit */short) max((((/* implicit */unsigned int) (((~(((/* implicit */int) (short)17253)))) % (((((/* implicit */_Bool) (unsigned char)206)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (unsigned short)32767))))))), (var_0)));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            {
                var_16 = ((/* implicit */signed char) (-((~(((((/* implicit */int) arr_4 [i_0])) ^ (((/* implicit */int) var_1))))))));
                var_17 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) (short)-18116)) ^ (((/* implicit */int) arr_0 [i_0] [i_1]))))) ? (min((((((/* implicit */unsigned int) ((/* implicit */int) (short)-18114))) + (1967235481U))), (((/* implicit */unsigned int) arr_5 [i_0] [i_0] [i_0])))) : (((/* implicit */unsigned int) ((var_2) & (((/* implicit */int) arr_3 [i_0] [i_1])))))));
                arr_6 [i_0] [i_1] [i_1] = ((/* implicit */unsigned long long int) ((((((((/* implicit */_Bool) arr_4 [i_0])) || (((/* implicit */_Bool) (short)18117)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (short)20817)) ? (((/* implicit */int) (short)-21956)) : (arr_5 [i_0] [i_0] [(unsigned short)12])))))) ? (((((/* implicit */_Bool) arr_1 [i_1])) ? (((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) (short)-18131)) : (((/* implicit */int) arr_4 [i_1])))) : (((((/* implicit */_Bool) (short)-1)) ? (((/* implicit */int) (short)1022)) : (((/* implicit */int) (short)-1)))))) : (((((((/* implicit */_Bool) arr_2 [i_0])) || (((/* implicit */_Bool) var_11)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-1))))) : (((/* implicit */int) ((((/* implicit */_Bool) var_4)) || (((/* implicit */_Bool) var_6)))))))));
                var_18 = ((/* implicit */short) (~(((/* implicit */int) ((((/* implicit */_Bool) (signed char)98)) && (((((/* implicit */int) (short)1243)) < (((/* implicit */int) (short)-2)))))))));
                var_19 += ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_1])) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (var_5) : (((/* implicit */int) (signed char)64))))))))) * (((((((/* implicit */_Bool) var_6)) ? (var_9) : (((/* implicit */unsigned int) var_7)))) * (((/* implicit */unsigned int) (+(((/* implicit */int) (short)3))))))));
            }
        } 
    } 
    var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (((((~(8387584))) + (2147483647))) << ((((((~(((/* implicit */int) var_11)))) + (51897))) - (19)))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)1242)) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)195)))))) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_6)))) : (((/* implicit */int) min((((/* implicit */short) (!(((/* implicit */_Bool) var_5))))), (min((((/* implicit */short) var_6)), ((short)6))))))));
}
