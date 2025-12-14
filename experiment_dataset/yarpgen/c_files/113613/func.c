/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113613
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113613 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113613
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
    for (unsigned short i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (unsigned char i_2 = 0; i_2 < 24; i_2 += 3) 
                {
                    for (long long int i_3 = 0; i_3 < 24; i_3 += 3) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 24; i_4 += 1) 
                        {
                            {
                                arr_10 [i_0] [i_1] [i_0] [i_3] [i_4] [i_4] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */int) var_4)), (var_3)))) ? (((((/* implicit */_Bool) 1369295419)) ? (649290552614325070ULL) : (((/* implicit */unsigned long long int) -3747467420261990895LL)))) : (((/* implicit */unsigned long long int) min((-1369295419), (((/* implicit */int) (unsigned short)8192)))))))) || (((/* implicit */_Bool) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_10))))))))));
                                arr_11 [i_0] [i_1] [i_1] [18LL] = (+(((/* implicit */int) var_8)));
                                var_12 = ((/* implicit */long long int) max((((((/* implicit */_Bool) (~(((/* implicit */int) (short)-27729))))) ? (max((((/* implicit */unsigned long long int) var_8)), (var_1))) : (((/* implicit */unsigned long long int) min((var_9), (var_3)))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)8192))))) ? (((((/* implicit */int) (_Bool)0)) / (((/* implicit */int) (unsigned char)16)))) : (((((/* implicit */_Bool) var_10)) ? (var_9) : (((/* implicit */int) var_8)))))))));
                            }
                        } 
                    } 
                } 
                arr_12 [16ULL] [i_0] = ((/* implicit */unsigned short) min(((((!(((/* implicit */_Bool) var_8)))) ? (((/* implicit */long long int) var_3)) : (min((var_10), (((/* implicit */long long int) var_9)))))), (((/* implicit */long long int) min((((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) var_2))) == (var_0)))), (max((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)28432))))))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned char i_5 = 2; i_5 < 19; i_5 += 2) 
    {
        for (unsigned char i_6 = 0; i_6 < 22; i_6 += 3) 
        {
            for (unsigned short i_7 = 0; i_7 < 22; i_7 += 2) 
            {
                {
                    arr_22 [i_6] = ((/* implicit */unsigned char) ((unsigned long long int) min((((/* implicit */long long int) ((((/* implicit */int) var_6)) / (((/* implicit */int) var_6))))), (var_0))));
                    /* LoopNest 2 */
                    for (unsigned char i_8 = 0; i_8 < 22; i_8 += 1) 
                    {
                        for (unsigned char i_9 = 1; i_9 < 21; i_9 += 1) 
                        {
                            {
                                var_13 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_5), (((/* implicit */long long int) var_4))))) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (!(((/* implicit */_Bool) var_11)))))))) ? (((/* implicit */unsigned long long int) min((((/* implicit */long long int) var_7)), (max((var_10), (var_5)))))) : (((((/* implicit */_Bool) min((((/* implicit */long long int) var_9)), (var_10)))) ? (((/* implicit */unsigned long long int) var_3)) : (min((var_1), (var_1)))))));
                                var_14 = ((/* implicit */long long int) min((var_14), (((/* implicit */long long int) (+(((((/* implicit */unsigned long long int) ((/* implicit */int) ((short) var_2)))) + (max((((/* implicit */unsigned long long int) var_10)), (var_1))))))))));
                                var_15 += ((/* implicit */short) (+(917504)));
                                var_16 -= ((/* implicit */int) ((max((((/* implicit */unsigned long long int) ((var_0) < (((/* implicit */long long int) ((/* implicit */int) var_2)))))), (((var_1) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))))) > (((/* implicit */unsigned long long int) max((max((var_0), (((/* implicit */long long int) var_7)))), (((-6196653948637642610LL) / (((/* implicit */long long int) ((/* implicit */int) (unsigned short)64244))))))))));
                            }
                        } 
                    } 
                    arr_28 [i_6] [i_7] = ((/* implicit */unsigned char) min((min((((/* implicit */unsigned long long int) var_9)), (min((((/* implicit */unsigned long long int) var_7)), (var_1))))), (((/* implicit */unsigned long long int) min((min(((unsigned char)237), ((unsigned char)112))), (((/* implicit */unsigned char) (_Bool)1)))))));
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */unsigned short) min((var_17), (((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) (~(min((((/* implicit */int) var_2)), (var_9)))))), (((((/* implicit */unsigned long long int) min((((/* implicit */long long int) var_4)), (var_10)))) - (((((/* implicit */_Bool) var_8)) ? (var_1) : (((/* implicit */unsigned long long int) var_0)))))))))));
}
