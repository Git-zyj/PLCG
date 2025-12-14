/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166733
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166733 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166733
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
    for (unsigned short i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        for (unsigned char i_1 = 1; i_1 < 12; i_1 += 2) 
        {
            {
                var_10 = ((/* implicit */_Bool) arr_1 [i_0]);
                /* LoopNest 2 */
                for (unsigned short i_2 = 2; i_2 < 12; i_2 += 4) 
                {
                    for (unsigned short i_3 = 2; i_3 < 11; i_3 += 3) 
                    {
                        {
                            var_11 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_5 [i_1] [i_2 + 1] [i_3])) : (var_3))) < (max((((/* implicit */int) ((1192413387U) > (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0)))))), ((+(((/* implicit */int) var_6))))))));
                            var_12 = ((/* implicit */unsigned int) max((var_12), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((int) (_Bool)1))) ? (((((/* implicit */_Bool) arr_0 [i_2])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_2)))) : ((-(-2035130590)))))))))));
                            var_13 = ((/* implicit */int) ((unsigned short) ((((/* implicit */int) max((((/* implicit */unsigned short) var_8)), ((unsigned short)39421)))) ^ (max((-415643757), (var_3))))));
                            var_14 = ((/* implicit */unsigned short) max((var_14), (((/* implicit */unsigned short) max((((((/* implicit */int) (_Bool)1)) - (((((/* implicit */int) (unsigned short)39424)) / (((/* implicit */int) (_Bool)1)))))), (((/* implicit */int) (_Bool)1)))))));
                        }
                    } 
                } 
                arr_8 [i_0] [i_0] [i_1] = ((/* implicit */short) min((((/* implicit */unsigned short) arr_4 [i_0] [7ULL] [i_0])), ((unsigned short)5080)));
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned short i_4 = 0; i_4 < 12; i_4 += 2) 
    {
        for (unsigned short i_5 = 0; i_5 < 12; i_5 += 2) 
        {
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
            {
                {
                    arr_18 [i_4] [i_5] [i_5] [i_6] = (unsigned short)14536;
                    var_15 = ((/* implicit */unsigned short) (_Bool)0);
                    var_16 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) var_1))));
                }
            } 
        } 
    } 
    var_17 |= ((/* implicit */unsigned char) max((var_5), (var_2)));
    /* LoopNest 2 */
    for (unsigned short i_7 = 0; i_7 < 19; i_7 += 4) 
    {
        for (unsigned char i_8 = 0; i_8 < 19; i_8 += 4) 
        {
            {
                var_18 = ((/* implicit */int) max((((/* implicit */unsigned short) max((var_0), (((/* implicit */unsigned char) arr_22 [i_7] [(unsigned short)3] [i_8]))))), (((unsigned short) (~(((/* implicit */int) (_Bool)1)))))));
                var_19 = ((/* implicit */unsigned short) max((-1447454286), (((/* implicit */int) (_Bool)1))));
                var_20 = ((/* implicit */unsigned long long int) min((var_20), (((((unsigned long long int) (unsigned short)55993)) ^ (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)65535))))) ? (3190124615U) : (((/* implicit */unsigned int) max(((-2147483647 - 1)), (((/* implicit */int) (_Bool)1))))))))))));
            }
        } 
    } 
}
