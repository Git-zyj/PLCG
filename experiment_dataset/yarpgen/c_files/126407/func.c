/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126407
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126407 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126407
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
    var_16 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (((-(((/* implicit */int) var_1)))) <= ((~(((/* implicit */int) (short)-26525))))))) : (((/* implicit */int) max((((/* implicit */signed char) ((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) (unsigned char)134))))), (min((var_1), (var_1))))))));
    var_17 = ((/* implicit */unsigned short) (signed char)1);
    /* LoopSeq 3 */
    for (long long int i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        var_18 = ((/* implicit */unsigned long long int) ((((int) var_3)) <= (((/* implicit */int) ((((/* implicit */int) arr_1 [i_0])) == (((/* implicit */int) arr_1 [i_0])))))));
        var_19 = (-(-7555287759945855306LL));
        var_20 = ((/* implicit */int) max((max((var_8), (((/* implicit */long long int) arr_1 [i_0])))), (((/* implicit */long long int) min((arr_1 [16ULL]), (((/* implicit */short) (signed char)-54)))))));
        /* LoopNest 3 */
        for (short i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 17; i_2 += 2) 
            {
                for (unsigned char i_3 = 0; i_3 < 17; i_3 += 2) 
                {
                    {
                        var_21 -= ((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) var_14)));
                        var_22 = ((/* implicit */signed char) ((((/* implicit */int) (signed char)79)) <= (((/* implicit */int) (short)20833))));
                    }
                } 
            } 
        } 
    }
    for (int i_4 = 0; i_4 < 25; i_4 += 2) 
    {
        arr_12 [i_4] = ((/* implicit */long long int) (~(((/* implicit */int) (unsigned char)114))));
        arr_13 [i_4] = var_15;
    }
    for (long long int i_5 = 0; i_5 < 21; i_5 += 2) 
    {
        /* LoopNest 2 */
        for (long long int i_6 = 0; i_6 < 21; i_6 += 1) 
        {
            for (short i_7 = 0; i_7 < 21; i_7 += 1) 
            {
                {
                    arr_25 [i_5] [i_6] [i_7] = ((/* implicit */unsigned long long int) var_15);
                    arr_26 [i_5] [i_5] [i_6] [i_7] = ((/* implicit */long long int) 3520661946U);
                }
            } 
        } 
        /* LoopNest 3 */
        for (signed char i_8 = 0; i_8 < 21; i_8 += 2) 
        {
            for (int i_9 = 0; i_9 < 21; i_9 += 1) 
            {
                for (long long int i_10 = 0; i_10 < 21; i_10 += 1) 
                {
                    {
                        var_23 = ((/* implicit */signed char) min((((var_2) / (var_2))), (((/* implicit */int) ((var_6) == (((/* implicit */int) var_3)))))));
                        var_24 |= ((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */unsigned long long int) 0U)) : (1632351735404853470ULL)));
                        var_25 ^= ((/* implicit */_Bool) ((short) (!(arr_22 [i_10] [14] [i_8] [i_5]))));
                    }
                } 
            } 
        } 
        /* LoopNest 3 */
        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
        {
            for (unsigned char i_12 = 0; i_12 < 21; i_12 += 1) 
            {
                for (unsigned int i_13 = 0; i_13 < 21; i_13 += 2) 
                {
                    {
                        var_26 = (((!(((/* implicit */_Bool) var_0)))) ? (((/* implicit */int) (unsigned char)142)) : (((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_43 [i_5] [(signed char)11] [i_12] [i_13])) : (((/* implicit */int) (short)(-32767 - 1)))))) <= (((((/* implicit */long long int) ((/* implicit */int) (signed char)-64))) ^ (var_15)))))));
                        arr_48 [i_13] [i_13] [i_11] [i_13] [i_13] = ((/* implicit */signed char) max((((16814392338304698134ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)56786))))), (((/* implicit */unsigned long long int) (-((-(((/* implicit */int) arr_14 [i_13])))))))));
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (unsigned short i_14 = 0; i_14 < 21; i_14 += 2) 
        {
            for (int i_15 = 0; i_15 < 21; i_15 += 1) 
            {
                {
                    var_27 = ((/* implicit */short) (-((~(((/* implicit */int) (unsigned char)107))))));
                    var_28 = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_3))) >= (7555287759945855309LL)));
                }
            } 
        } 
    }
}
