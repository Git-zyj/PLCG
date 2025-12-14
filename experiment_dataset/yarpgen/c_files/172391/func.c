/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172391
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172391 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172391
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
    /* LoopSeq 3 */
    for (short i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */_Bool) (short)-31791);
        var_16 = ((/* implicit */int) min((((/* implicit */unsigned long long int) ((long long int) 1981569241))), ((~(arr_1 [i_0])))));
        arr_3 [i_0] = ((/* implicit */_Bool) 1981569246);
        var_17 = ((/* implicit */unsigned short) ((short) ((((/* implicit */_Bool) (~(((/* implicit */int) (short)10))))) ? (max((arr_1 [i_0]), (6974246057367175475ULL))) : (((/* implicit */unsigned long long int) (~(-1981569251)))))));
    }
    for (signed char i_1 = 0; i_1 < 15; i_1 += 1) 
    {
        arr_7 [i_1] = ((/* implicit */signed char) ((3519527325279887739LL) > (((/* implicit */long long int) ((2147483647) ^ (((((/* implicit */_Bool) (unsigned short)54970)) ? (((/* implicit */int) (short)-512)) : (-1981569258))))))));
        var_18 = ((/* implicit */long long int) ((unsigned char) 1981569241));
        arr_8 [i_1] [i_1] = ((/* implicit */_Bool) ((int) 1981569260));
        var_19 = ((/* implicit */unsigned char) min((var_19), (((/* implicit */unsigned char) (-(((((/* implicit */unsigned int) ((((/* implicit */int) (signed char)-94)) ^ (((/* implicit */int) arr_4 [i_1] [i_1]))))) * (arr_5 [i_1]))))))));
        arr_9 [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_1])) ? (arr_5 [i_1]) : (arr_5 [i_1])))) ? (((/* implicit */unsigned int) ((((/* implicit */int) (signed char)76)) & (((/* implicit */int) (unsigned char)167))))) : (arr_5 [i_1])));
    }
    for (signed char i_2 = 0; i_2 < 25; i_2 += 1) 
    {
        var_20 &= ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) 3214601489U)) ? (((/* implicit */int) min(((short)-16996), (((/* implicit */short) (signed char)-91))))) : (((/* implicit */int) min(((signed char)-117), (((/* implicit */signed char) (_Bool)0)))))))));
        /* LoopNest 3 */
        for (long long int i_3 = 2; i_3 < 24; i_3 += 2) 
        {
            for (long long int i_4 = 0; i_4 < 25; i_4 += 3) 
            {
                for (unsigned char i_5 = 0; i_5 < 25; i_5 += 1) 
                {
                    {
                        var_21 = ((/* implicit */unsigned char) ((signed char) 1981569258));
                        arr_18 [i_4] [i_4] [i_4] [i_4] [i_4] [i_4] = ((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) ((((/* implicit */int) (short)18040)) > (((/* implicit */int) (_Bool)1)))))))) || (((/* implicit */_Bool) (~(arr_14 [i_2]))))));
                    }
                } 
            } 
        } 
        var_22 += ((/* implicit */_Bool) (unsigned char)158);
    }
    var_23 = ((/* implicit */int) 3519527325279887755LL);
    var_24 = ((/* implicit */unsigned long long int) var_12);
    var_25 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) 705591009U)) ? (((/* implicit */unsigned int) -1981569242)) : (var_5)));
    /* LoopNest 2 */
    for (int i_6 = 2; i_6 < 17; i_6 += 3) 
    {
        for (unsigned long long int i_7 = 3; i_7 < 17; i_7 += 1) 
        {
            {
                var_26 -= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_12 [i_6 + 1] [i_7] [i_7 - 1])) ? (710634781U) : (((/* implicit */unsigned int) arr_16 [i_6] [i_6] [i_7] [i_7]))));
                arr_24 [i_6] = ((/* implicit */signed char) (-((~((-(arr_14 [i_6])))))));
                arr_25 [i_6] = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) min((4200889354U), (((/* implicit */unsigned int) (unsigned short)22602))))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_19 [i_7 - 3] [i_6]))))) : (min((6777660255570450806ULL), (((/* implicit */unsigned long long int) arr_14 [i_6]))))))));
                arr_26 [i_6] = ((/* implicit */unsigned short) max((((/* implicit */unsigned int) (_Bool)1)), (2013265920U)));
            }
        } 
    } 
}
