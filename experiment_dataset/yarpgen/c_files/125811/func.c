/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125811
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125811 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125811
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
    var_10 = max((((/* implicit */long long int) var_3)), (min((((/* implicit */long long int) -1174582839)), (((((/* implicit */_Bool) (unsigned char)216)) ? (-5940558008133968146LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)51))))))));
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        var_11 = ((/* implicit */unsigned long long int) max((var_11), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(var_4)))) ? (((/* implicit */int) ((arr_1 [i_0]) <= (arr_1 [i_0])))) : (((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */int) ((var_3) != (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0] [i_0])))))) : (((/* implicit */int) ((((/* implicit */long long int) var_3)) < (var_7)))))))))));
        /* LoopNest 3 */
        for (unsigned long long int i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            for (short i_2 = 3; i_2 < 9; i_2 += 4) 
            {
                for (unsigned char i_3 = 3; i_3 < 11; i_3 += 2) 
                {
                    {
                        var_12 = ((/* implicit */int) max((max((var_0), (((/* implicit */unsigned int) (unsigned char)23)))), (((/* implicit */unsigned int) ((((/* implicit */int) arr_6 [i_2 + 1] [i_2 + 3] [i_2 - 1])) != (((/* implicit */int) arr_8 [i_3] [i_3 + 1] [i_3 - 3])))))));
                        var_13 = ((/* implicit */short) var_7);
                        var_14 = ((/* implicit */long long int) min((min((var_8), (((/* implicit */unsigned short) arr_9 [i_3] [i_3 + 2] [i_3 + 2] [i_3 + 1])))), (((/* implicit */unsigned short) arr_9 [i_3] [i_3 - 3] [i_3] [i_3 - 1]))));
                        var_15 -= ((/* implicit */unsigned int) max((((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)44)) ? (((/* implicit */int) (unsigned char)234)) : (((/* implicit */int) (signed char)126))))), (((arr_3 [i_1] [i_2 + 3] [i_3 - 1]) | (((/* implicit */long long int) ((var_3) & (((/* implicit */unsigned int) ((/* implicit */int) var_8))))))))));
                        arr_10 [i_0] [(short)7] = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_3 - 2] [i_2 + 2])) ? (((/* implicit */int) (unsigned char)237)) : (((/* implicit */int) var_8))))) > (arr_7 [i_2])));
                    }
                } 
            } 
        } 
    }
    var_16 += var_5;
    /* LoopSeq 2 */
    for (short i_4 = 0; i_4 < 12; i_4 += 2) 
    {
        arr_14 [i_4] = arr_9 [i_4] [i_4] [i_4] [i_4];
        var_17 = ((/* implicit */int) ((((((/* implicit */long long int) var_3)) | (var_1))) == (((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_13 [i_4] [i_4])) : (((/* implicit */int) arr_13 [i_4] [(unsigned char)7])))))));
        /* LoopNest 2 */
        for (long long int i_5 = 0; i_5 < 12; i_5 += 4) 
        {
            for (unsigned char i_6 = 0; i_6 < 12; i_6 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_7 = 1; i_7 < 10; i_7 += 2) 
                    {
                        for (long long int i_8 = 0; i_8 < 12; i_8 += 1) 
                        {
                            {
                                var_18 &= ((/* implicit */int) var_6);
                                var_19 = ((unsigned long long int) var_9);
                            }
                        } 
                    } 
                    var_20 = ((/* implicit */unsigned long long int) ((unsigned short) ((((/* implicit */_Bool) (unsigned char)44)) ? (((/* implicit */int) (unsigned char)216)) : (((/* implicit */int) (unsigned char)23)))));
                }
            } 
        } 
    }
    for (unsigned long long int i_9 = 0; i_9 < 24; i_9 += 4) 
    {
        /* LoopNest 2 */
        for (short i_10 = 1; i_10 < 23; i_10 += 4) 
        {
            for (unsigned int i_11 = 0; i_11 < 24; i_11 += 1) 
            {
                {
                    arr_35 [i_9] [i_10 - 1] = ((/* implicit */long long int) ((var_0) * (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) var_3)) > (var_4)))))));
                    arr_36 [i_9] [i_10] [(short)11] = ((/* implicit */unsigned char) var_6);
                }
            } 
        } 
        var_21 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((((/* implicit */unsigned int) var_9)) | (var_0)))) ^ (((((/* implicit */_Bool) var_8)) ? (var_1) : (var_1)))))) ? (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)44))) > (1685896049943003884LL)))) : (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_27 [(_Bool)1])) : (((/* implicit */int) arr_30 [i_9] [i_9]))))));
    }
}
