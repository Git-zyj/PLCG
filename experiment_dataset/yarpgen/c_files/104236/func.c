/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104236
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104236 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104236
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
    /* LoopSeq 2 */
    for (unsigned int i_0 = 1; i_0 < 9; i_0 += 4) 
    {
        var_18 ^= ((/* implicit */signed char) var_14);
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 11; i_2 += 2) 
            {
                {
                    /* LoopSeq 1 */
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        arr_11 [i_0 + 2] [5LL] [i_0 + 2] [i_0] [i_0 + 2] = ((/* implicit */int) (-(max((((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)113)) ? (((/* implicit */int) (signed char)113)) : (((/* implicit */int) (signed char)120))))), (((var_2) / (((/* implicit */long long int) ((/* implicit */int) (signed char)120)))))))));
                        var_19 = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)228))) <= (((((/* implicit */unsigned int) ((/* implicit */int) (short)-12221))) % (2855542605U)))));
                        arr_12 [i_0] [i_1] [i_1] [i_1] [(short)1] = ((/* implicit */unsigned char) ((short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-114)) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (var_12)))) ? ((~(var_1))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) (signed char)122)) : (((/* implicit */int) arr_4 [i_1] [(short)8]))))))));
                        arr_13 [i_0] [9LL] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)-1)) ? (((/* implicit */int) min((((/* implicit */short) (signed char)113)), (arr_0 [i_0])))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_8 [i_3] [i_0])) : (((/* implicit */int) var_15))))))))));
                    }
                    var_20 = ((/* implicit */_Bool) 4278752834538546957LL);
                    var_21 ^= 6256183170333948579LL;
                }
            } 
        } 
        var_22 = ((/* implicit */unsigned int) ((((/* implicit */long long int) 2147483647)) % (-4278752834538546965LL)));
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 25; i_4 += 2) 
    {
        var_23 = ((/* implicit */int) (-(((((/* implicit */_Bool) var_6)) ? (var_1) : (((/* implicit */unsigned long long int) -2088040110))))));
        arr_18 [i_4] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(-2096593434641440413LL)))) ? (((((/* implicit */_Bool) arr_15 [i_4])) ? (((/* implicit */int) arr_14 [i_4])) : (((/* implicit */int) (unsigned char)254)))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_15 [i_4])))))));
    }
    var_24 += ((/* implicit */unsigned long long int) ((short) ((unsigned long long int) var_1)));
    /* LoopSeq 2 */
    for (unsigned long long int i_5 = 0; i_5 < 13; i_5 += 2) 
    {
        arr_21 [i_5] = ((/* implicit */short) ((((/* implicit */int) ((short) ((unsigned short) arr_17 [i_5])))) | ((~(((/* implicit */int) arr_20 [i_5]))))));
        arr_22 [i_5] = ((/* implicit */long long int) ((signed char) (short)-12221));
    }
    for (short i_6 = 0; i_6 < 17; i_6 += 2) 
    {
        arr_27 [i_6] = ((/* implicit */unsigned char) ((unsigned long long int) (unsigned char)117));
        /* LoopNest 2 */
        for (signed char i_7 = 0; i_7 < 17; i_7 += 4) 
        {
            for (unsigned int i_8 = 1; i_8 < 16; i_8 += 2) 
            {
                {
                    arr_34 [i_6] [i_6] [i_8] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_10))));
                    var_25 ^= (!((!(((/* implicit */_Bool) (unsigned short)65525)))));
                }
            } 
        } 
    }
    var_26 = ((/* implicit */unsigned int) min((var_26), (((/* implicit */unsigned int) ((long long int) (short)13375)))));
}
