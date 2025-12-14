/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123128
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123128 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123128
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
    for (unsigned char i_0 = 1; i_0 < 19; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            {
                arr_4 [i_0] = ((/* implicit */signed char) ((short) (short)26530));
                arr_5 [i_0] [i_0] = (unsigned char)72;
            }
        } 
    } 
    var_13 = ((/* implicit */short) max((((unsigned char) var_8)), (((/* implicit */unsigned char) ((((/* implicit */int) ((signed char) (short)5941))) != (((/* implicit */int) (short)-1)))))));
    var_14 ^= ((/* implicit */signed char) ((short) ((((/* implicit */int) (signed char)96)) + (((/* implicit */int) ((unsigned char) (signed char)-42))))));
    /* LoopNest 2 */
    for (short i_2 = 0; i_2 < 12; i_2 += 4) 
    {
        for (short i_3 = 0; i_3 < 12; i_3 += 1) 
        {
            {
                var_15 = ((/* implicit */signed char) (+(((/* implicit */int) ((((/* implicit */int) arr_9 [i_2])) == (((/* implicit */int) arr_9 [i_2])))))));
                var_16 = ((/* implicit */signed char) (short)-23743);
                arr_11 [i_2] = ((/* implicit */signed char) max(((short)-5964), ((short)10336)));
                arr_12 [i_2] [i_2] [(short)8] = ((/* implicit */unsigned char) (+(((((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (signed char)-8)) : (((/* implicit */int) var_4)))) / (((/* implicit */int) min((((/* implicit */unsigned char) (signed char)-8)), ((unsigned char)191))))))));
                var_17 += ((/* implicit */short) (+(((/* implicit */int) (signed char)40))));
            }
        } 
    } 
    var_18 = ((/* implicit */signed char) ((short) var_8));
}
