/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124857
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124857 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124857
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
    var_20 = ((/* implicit */signed char) (unsigned char)0);
    var_21 = ((/* implicit */int) min((var_21), (((((((/* implicit */int) (short)-8094)) + (2147483647))) << (((/* implicit */int) (((+(((/* implicit */int) (unsigned short)36782)))) >= (((((/* implicit */_Bool) var_5)) ? (var_15) : (((/* implicit */int) (unsigned char)194)))))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        for (int i_1 = 4; i_1 < 15; i_1 += 1) 
        {
            {
                arr_6 [i_0] [(unsigned char)1] [i_1 - 2] = ((/* implicit */int) ((signed char) (short)10828));
                /* LoopNest 2 */
                for (signed char i_2 = 3; i_2 < 16; i_2 += 4) 
                {
                    for (signed char i_3 = 0; i_3 < 18; i_3 += 4) 
                    {
                        {
                            arr_13 [i_2] [i_1] [(unsigned char)12] [i_2 - 2] [(unsigned char)12] = min((((/* implicit */int) ((((((/* implicit */_Bool) (unsigned char)62)) || (((/* implicit */_Bool) (unsigned char)194)))) && (((/* implicit */_Bool) -174313458))))), ((+(((((/* implicit */_Bool) (unsigned char)194)) ? (((/* implicit */int) (unsigned short)32768)) : (((/* implicit */int) (unsigned char)62)))))));
                            var_22 = ((/* implicit */unsigned short) (-(max((((/* implicit */unsigned long long int) -441898835)), (((((/* implicit */_Bool) -174313454)) ? (13003657752204424343ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)62)))))))));
                            var_23 = ((/* implicit */unsigned long long int) max((var_23), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned short) ((((int) 1859793023451488989LL)) != ((~(1111062526)))))), ((unsigned short)65535))))));
                            var_24 = ((/* implicit */unsigned short) (~(var_4)));
                        }
                    } 
                } 
            }
        } 
    } 
}
