/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137115
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137115 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137115
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
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            for (unsigned char i_2 = 0; i_2 < 16; i_2 += 3) 
            {
                {
                    var_12 = ((/* implicit */short) max((max((max((((/* implicit */unsigned long long int) arr_2 [i_2] [i_1])), (var_4))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (unsigned short)61647))))))), (((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-4470))) : (((var_11) + (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)61647)))))))));
                    var_13 = ((/* implicit */short) min((var_13), (((/* implicit */short) min((((((/* implicit */_Bool) max((((/* implicit */unsigned char) var_6)), ((unsigned char)240)))) ? (((var_2) ^ (((/* implicit */int) (unsigned short)61650)))) : (((/* implicit */int) (_Bool)0)))), (((/* implicit */int) ((unsigned short) arr_0 [i_2]))))))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (short i_3 = 0; i_3 < 17; i_3 += 2) 
    {
        for (unsigned int i_4 = 0; i_4 < 17; i_4 += 2) 
        {
            {
                var_14 = ((/* implicit */_Bool) ((long long int) (unsigned char)240));
                /* LoopNest 3 */
                for (unsigned short i_5 = 4; i_5 < 14; i_5 += 3) 
                {
                    for (unsigned long long int i_6 = 1; i_6 < 13; i_6 += 4) 
                    {
                        for (unsigned char i_7 = 0; i_7 < 17; i_7 += 4) 
                        {
                            {
                                var_15 = ((/* implicit */signed char) 14755413056767122894ULL);
                                var_16 = ((/* implicit */unsigned int) min((var_16), (((/* implicit */unsigned int) var_4))));
                                var_17 = ((/* implicit */unsigned int) min((((((1215958486687223798ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)38))))) % (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))))), (((((/* implicit */_Bool) max((17ULL), (var_4)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 6142444737223547871ULL)) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (var_5)))) : (((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) -255759472)) : (var_11)))))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (long long int i_8 = 0; i_8 < 17; i_8 += 3) 
                {
                    for (unsigned int i_9 = 0; i_9 < 17; i_9 += 2) 
                    {
                        {
                            var_18 = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) (-((-(((/* implicit */int) arr_9 [i_3]))))))), (min(((-(17651776751733280815ULL))), (min((16585350639666576073ULL), (2832420773232627740ULL)))))));
                            var_19 *= ((/* implicit */signed char) max((((/* implicit */unsigned short) ((unsigned char) (unsigned char)15))), (((unsigned short) var_4))));
                            var_20 = ((/* implicit */short) (+(((/* implicit */int) var_3))));
                            var_21 = ((/* implicit */int) max((var_21), (((/* implicit */int) (!(((/* implicit */_Bool) var_9)))))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned long long int i_10 = 0; i_10 < 16; i_10 += 2) 
    {
        for (int i_11 = 0; i_11 < 16; i_11 += 4) 
        {
            {
                var_22 |= ((/* implicit */long long int) (+(((/* implicit */int) ((((/* implicit */_Bool) (~(var_1)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-14)) ? (16585350639666576073ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)2040)))))))))));
                /* LoopNest 3 */
                for (unsigned short i_12 = 0; i_12 < 16; i_12 += 4) 
                {
                    for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                    {
                        for (unsigned char i_14 = 4; i_14 < 14; i_14 += 2) 
                        {
                            {
                                var_23 = ((/* implicit */int) max((var_23), (((/* implicit */int) (!(((/* implicit */_Bool) arr_12 [i_11] [i_13] [i_13])))))));
                                var_24 ^= ((/* implicit */long long int) 16711680);
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
