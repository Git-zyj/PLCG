/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125857
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125857 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125857
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
    for (unsigned char i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            {
                arr_7 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */int) (unsigned char)255)) != (((((/* implicit */_Bool) (unsigned char)194)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (unsigned char)61))))))) + (((((/* implicit */_Bool) (unsigned char)249)) ? (((/* implicit */int) (unsigned char)61)) : (((/* implicit */int) (unsigned char)52))))));
                var_16 = ((/* implicit */unsigned char) min((var_16), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)197)) ? (((/* implicit */int) (unsigned char)192)) : (((/* implicit */int) (unsigned char)117)))))));
                arr_8 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_3)) ? ((~(((((/* implicit */int) var_1)) << (((((/* implicit */int) (unsigned char)95)) - (93))))))) : (max((((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (unsigned char)226)) : (((/* implicit */int) (unsigned char)226)))), (((((/* implicit */int) (unsigned char)161)) << (((((/* implicit */int) var_13)) - (235)))))))));
            }
        } 
    } 
    var_17 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)226)) ? (((/* implicit */int) (unsigned char)214)) : (((/* implicit */int) (unsigned char)62))));
    /* LoopNest 2 */
    for (unsigned char i_2 = 1; i_2 < 19; i_2 += 3) 
    {
        for (unsigned char i_3 = 2; i_3 < 19; i_3 += 3) 
        {
            {
                arr_14 [(unsigned char)16] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)37)) ^ (((/* implicit */int) (unsigned char)0))))) ? (((((/* implicit */int) var_9)) - (((/* implicit */int) var_6)))) : (((/* implicit */int) ((((((/* implicit */_Bool) (unsigned char)194)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) (unsigned char)226)))) != (((((/* implicit */int) var_5)) % (((/* implicit */int) var_5)))))))));
                var_18 = ((/* implicit */unsigned char) ((((((/* implicit */int) (unsigned char)207)) + (((/* implicit */int) (unsigned char)255)))) != (((/* implicit */int) ((((/* implicit */int) (unsigned char)190)) <= (((/* implicit */int) var_12)))))));
                arr_15 [i_2] = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) (unsigned char)160))))) ? (((/* implicit */int) (unsigned char)79)) : (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (unsigned char)199))))))));
            }
        } 
    } 
    var_19 &= ((/* implicit */unsigned char) (+(((/* implicit */int) (unsigned char)160))));
}
