/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139216
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139216 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139216
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
    for (unsigned char i_0 = 3; i_0 < 10; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            {
                var_14 = ((/* implicit */short) ((((/* implicit */int) max(((short)-20676), (((/* implicit */short) ((unsigned char) var_2)))))) >> (((((/* implicit */int) ((unsigned char) min((var_0), (((/* implicit */short) arr_1 [i_0])))))) - (126)))));
                var_15 = ((/* implicit */unsigned char) ((((/* implicit */int) ((unsigned char) arr_3 [i_0 - 3] [i_1]))) >> (((/* implicit */int) (!(((/* implicit */_Bool) ((short) var_9))))))));
                /* LoopNest 2 */
                for (short i_2 = 0; i_2 < 13; i_2 += 3) 
                {
                    for (unsigned char i_3 = 0; i_3 < 13; i_3 += 1) 
                    {
                        {
                            var_16 ^= var_2;
                            var_17 = ((/* implicit */short) ((((/* implicit */int) (short)-18568)) != (((/* implicit */int) (short)-20683))));
                            var_18 = ((/* implicit */short) ((((/* implicit */int) max((arr_3 [i_0 - 1] [i_0 + 3]), (arr_3 [i_0 + 2] [i_0 + 3])))) ^ (((/* implicit */int) ((short) arr_3 [i_0 + 1] [i_0 - 1])))));
                            var_19 = ((/* implicit */unsigned char) max((var_19), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_8 [i_0 + 1]))))) ? (((/* implicit */int) arr_4 [i_1] [i_2] [i_1] [(unsigned char)10])) : (((((/* implicit */int) (short)-20714)) * (((/* implicit */int) (unsigned char)114)))))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned char i_4 = 1; i_4 < 12; i_4 += 2) 
                {
                    for (unsigned char i_5 = 0; i_5 < 13; i_5 += 1) 
                    {
                        {
                            var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) ((((/* implicit */_Bool) (short)-20657)) ? (((/* implicit */int) (short)20669)) : (((/* implicit */int) min(((short)-20676), (((/* implicit */short) (unsigned char)240))))))))));
                            var_21 = ((/* implicit */unsigned char) min((((((((/* implicit */int) (short)20681)) << (((((/* implicit */int) (short)-1)) + (10))))) - (((/* implicit */int) (unsigned char)51)))), (((((/* implicit */int) arr_11 [i_4 + 1] [i_0 - 3] [i_4 + 1])) & (((/* implicit */int) var_2))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_22 ^= ((/* implicit */short) min(((unsigned char)255), ((unsigned char)125)));
}
