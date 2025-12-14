/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139768
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139768 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139768
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
    var_20 = (unsigned char)49;
    /* LoopSeq 4 */
    for (unsigned long long int i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        var_21 = (~(((/* implicit */int) (unsigned char)49)));
        var_22 = ((/* implicit */signed char) max((((int) min((var_15), (((/* implicit */unsigned long long int) var_1))))), (((/* implicit */int) (unsigned char)35))));
        var_23 = ((/* implicit */unsigned long long int) max((var_23), (((/* implicit */unsigned long long int) (short)12288))));
    }
    for (signed char i_1 = 0; i_1 < 25; i_1 += 2) 
    {
        arr_4 [i_1] = ((int) max((arr_3 [i_1]), (arr_3 [i_1])));
        /* LoopSeq 2 */
        for (short i_2 = 0; i_2 < 25; i_2 += 2) 
        {
            var_24 = ((/* implicit */_Bool) ((unsigned short) var_2));
            var_25 = ((/* implicit */_Bool) min(((~(((/* implicit */int) (unsigned char)220)))), ((((-(((/* implicit */int) (unsigned short)22)))) | (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)35)))))))));
        }
        for (signed char i_3 = 0; i_3 < 25; i_3 += 3) 
        {
            var_26 = ((/* implicit */unsigned char) ((min((((/* implicit */int) arr_2 [i_1])), (((((/* implicit */int) (signed char)-64)) * (((/* implicit */int) var_2)))))) > (((/* implicit */int) var_3))));
            var_27 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((((/* implicit */int) (unsigned char)207)) << (((((/* implicit */int) (short)-12289)) + (12293))))), (((/* implicit */int) (signed char)-104))))) ? (((/* implicit */int) var_4)) : (((((/* implicit */int) (short)-12298)) & (((/* implicit */int) (signed char)58))))));
            arr_11 [i_1] [i_3] = ((/* implicit */signed char) arr_7 [i_3] [i_1] [i_1]);
            var_28 = ((/* implicit */long long int) ((signed char) max((var_17), (((/* implicit */unsigned long long int) (signed char)-73)))));
            /* LoopNest 2 */
            for (short i_4 = 3; i_4 < 23; i_4 += 3) 
            {
                for (unsigned short i_5 = 3; i_5 < 23; i_5 += 1) 
                {
                    {
                        var_29 = ((/* implicit */_Bool) max((-414655630), ((-(((/* implicit */int) arr_10 [i_5 + 1] [i_5 - 2]))))));
                        var_30 = ((/* implicit */short) max((var_30), (((/* implicit */short) max((4055849801057806257ULL), (((/* implicit */unsigned long long int) (short)-25785)))))));
                        /* LoopSeq 2 */
                        for (unsigned short i_6 = 1; i_6 < 23; i_6 += 3) 
                        {
                            var_31 = ((/* implicit */_Bool) arr_18 [i_1] [(unsigned short)10] [(unsigned short)11] [i_1]);
                            var_32 = ((/* implicit */_Bool) arr_12 [i_3] [i_5 + 2] [i_3]);
                            var_33 += ((/* implicit */_Bool) max((arr_13 [i_1] [i_1]), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_18)) <= ((~(-1584528620))))))));
                            var_34 = ((/* implicit */unsigned short) 8372224);
                        }
                        for (unsigned short i_7 = 0; i_7 < 25; i_7 += 2) 
                        {
                            var_35 = ((/* implicit */unsigned short) (signed char)65);
                            arr_23 [i_3] [i_3] [i_4] [i_3] [i_3] = ((/* implicit */unsigned long long int) (~(((((/* implicit */int) var_14)) + (((/* implicit */int) max((((/* implicit */unsigned short) var_12)), (var_9))))))));
                        }
                        var_36 = (unsigned char)49;
                    }
                } 
            } 
        }
    }
    /* vectorizable */
    for (unsigned char i_8 = 0; i_8 < 11; i_8 += 3) 
    {
        /* LoopSeq 2 */
        for (unsigned long long int i_9 = 3; i_9 < 10; i_9 += 4) 
        {
            var_37 = ((/* implicit */int) arr_22 [i_8] [i_9] [i_8] [i_8] [i_8]);
            var_38 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) ((((/* implicit */int) var_11)) == (((/* implicit */int) var_6))))) : (((/* implicit */int) var_18))));
        }
        for (unsigned char i_10 = 0; i_10 < 11; i_10 += 3) 
        {
            var_39 = ((/* implicit */short) max((var_39), (((/* implicit */short) (-(((/* implicit */int) var_2)))))));
            var_40 = ((((/* implicit */int) arr_31 [i_8] [i_10] [(unsigned short)0])) ^ (((/* implicit */int) (unsigned char)255)));
        }
        var_41 = ((/* implicit */signed char) (unsigned char)223);
    }
    for (_Bool i_11 = 0; i_11 < 0; i_11 += 1) 
    {
        var_42 += ((/* implicit */signed char) arr_5 [(signed char)22] [i_11]);
        var_43 *= ((/* implicit */signed char) max((arr_8 [i_11 + 1] [i_11 + 1]), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_21 [i_11 + 1] [i_11] [i_11 + 1] [i_11] [i_11 + 1])) && (((/* implicit */_Bool) (unsigned short)65535)))))));
        var_44 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned char) arr_33 [i_11]))) ? (((unsigned long long int) arr_33 [i_11])) : (((/* implicit */unsigned long long int) max((arr_33 [i_11]), (((/* implicit */long long int) var_6)))))));
    }
    var_45 = ((/* implicit */long long int) var_17);
    var_46 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((max((var_7), (((/* implicit */int) (signed char)26)))) & (((/* implicit */int) ((signed char) (_Bool)0)))))) ? (((/* implicit */int) var_18)) : (((/* implicit */int) max((((/* implicit */signed char) (!(((/* implicit */_Bool) var_12))))), (var_1))))));
}
