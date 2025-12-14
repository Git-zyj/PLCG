/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106751
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106751 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106751
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
    var_20 = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) 2147483647)), (((((/* implicit */_Bool) min((0U), (var_17)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (144114638320041984ULL)))));
    var_21 = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) 1162068060)))) | (((((/* implicit */_Bool) (~(var_16)))) ? (var_16) : (((/* implicit */unsigned int) min((-1162068060), (((/* implicit */int) var_8)))))))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 13; i_0 += 3) 
    {
        for (unsigned char i_1 = 1; i_1 < 14; i_1 += 1) 
        {
            {
                arr_5 [i_1] = ((((/* implicit */int) var_12)) / (-1162068061));
                /* LoopNest 2 */
                for (unsigned int i_2 = 0; i_2 < 15; i_2 += 1) 
                {
                    for (int i_3 = 0; i_3 < 15; i_3 += 1) 
                    {
                        {
                            var_22 = ((/* implicit */unsigned short) var_14);
                            var_23 = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) -1162068070)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (short)-27344))))))) ? (min((((unsigned long long int) 1162068060)), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (signed char)-39))))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((int) (signed char)124))) ? (((unsigned int) arr_9 [i_0] [i_1 + 1] [i_2] [i_3] [i_1] [i_3])) : (((/* implicit */unsigned int) ((-1162068060) & (-1162068061)))))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
