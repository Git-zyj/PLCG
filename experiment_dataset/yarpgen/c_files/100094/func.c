/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100094
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100094 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100094
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
    for (unsigned short i_0 = 2; i_0 < 22; i_0 += 3) 
    {
        for (signed char i_1 = 2; i_1 < 23; i_1 += 1) 
        {
            {
                var_10 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) max((((/* implicit */short) (unsigned char)169)), ((short)-8502)))) << (((/* implicit */int) (!(((/* implicit */_Bool) (short)-8515)))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) (short)-8510)) * (((/* implicit */int) (unsigned char)207))))))))) : (((unsigned int) ((long long int) (short)-8490)))));
                var_11 += ((/* implicit */short) (+(((/* implicit */int) (_Bool)1))));
            }
        } 
    } 
    var_12 = ((/* implicit */short) (signed char)-11);
    /* LoopNest 2 */
    for (long long int i_2 = 1; i_2 < 13; i_2 += 3) 
    {
        for (short i_3 = 0; i_3 < 16; i_3 += 1) 
        {
            {
                var_13 += ((/* implicit */unsigned int) ((short) max((max((((/* implicit */short) (signed char)-39)), ((short)-8490))), (((/* implicit */short) (unsigned char)19)))));
                /* LoopNest 2 */
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    for (short i_5 = 0; i_5 < 16; i_5 += 2) 
                    {
                        {
                            var_14 = ((/* implicit */long long int) (_Bool)0);
                            var_15 = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_9 [i_2 + 2] [i_3] [i_4]))))), (arr_7 [i_2] [i_2 + 2] [i_2 + 1])));
                            var_16 = ((/* implicit */unsigned int) (((~(((/* implicit */int) (short)-8484)))) ^ (((((/* implicit */int) (signed char)-39)) ^ (((/* implicit */int) arr_10 [i_2 + 1] [i_2]))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_17 = ((/* implicit */long long int) (short)8484);
    var_18 = ((/* implicit */unsigned short) var_9);
}
