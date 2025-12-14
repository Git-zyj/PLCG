/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118080
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118080 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118080
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
    var_20 = ((/* implicit */_Bool) 3017888391203045976LL);
    /* LoopNest 2 */
    for (unsigned short i_0 = 2; i_0 < 7; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            {
                var_21 = ((/* implicit */long long int) min((var_21), (((/* implicit */long long int) ((((/* implicit */int) (unsigned char)118)) == (((/* implicit */int) ((short) var_14))))))));
                var_22 = ((/* implicit */short) ((int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) arr_2 [i_0] [i_0 - 1] [i_0 - 2])))));
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 10; i_2 += 4) 
                {
                    for (unsigned short i_3 = 0; i_3 < 10; i_3 += 1) 
                    {
                        {
                            arr_8 [i_1] = ((/* implicit */int) var_0);
                            var_23 = ((/* implicit */unsigned long long int) ((signed char) arr_5 [i_3] [i_2] [i_1] [i_0]));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned char i_4 = 4; i_4 < 9; i_4 += 3) 
                {
                    for (long long int i_5 = 0; i_5 < 10; i_5 += 4) 
                    {
                        {
                            var_24 = ((/* implicit */short) min((var_24), (((/* implicit */short) (((-(3ULL))) == (((/* implicit */unsigned long long int) (~(((/* implicit */int) ((arr_7 [i_0] [5] [i_0] [2LL]) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-3195))))))))))))));
                            var_25 += ((/* implicit */unsigned short) arr_12 [i_0] [i_0]);
                            arr_14 [i_0] [i_1] [i_0] [(unsigned short)2] [i_0] [i_0 + 3] = ((/* implicit */unsigned int) ((unsigned short) (!((!(((/* implicit */_Bool) var_15)))))));
                            arr_15 [i_0] [i_1] [i_4 + 1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) 2097151)) - (arr_1 [i_4 - 1])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)-32760)))))) : (((((/* implicit */_Bool) (unsigned char)1)) ? (((/* implicit */unsigned long long int) -1628910002)) : (3176566473604332311ULL)))));
                            var_26 = ((/* implicit */int) 876540761569129377ULL);
                        }
                    } 
                } 
            }
        } 
    } 
}
