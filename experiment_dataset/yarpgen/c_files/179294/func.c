/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179294
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179294 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179294
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
    for (unsigned char i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        arr_4 [i_0] = ((/* implicit */signed char) min((((((/* implicit */_Bool) var_12)) ? (max((5881482657894219783LL), (-5881482657894219782LL))) : (((-5881482657894219783LL) - (((/* implicit */long long int) ((/* implicit */int) var_0))))))), (((/* implicit */long long int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) 3647459441U)) ? (((/* implicit */int) (unsigned char)120)) : (((/* implicit */int) var_12))))) * (((((/* implicit */_Bool) (unsigned char)128)) ? (31U) : (((/* implicit */unsigned int) 524288)))))))));
        var_14 = ((/* implicit */_Bool) ((unsigned char) max((((long long int) (unsigned char)120)), (((/* implicit */long long int) var_7)))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        /* LoopNest 3 */
        for (unsigned char i_2 = 0; i_2 < 16; i_2 += 3) 
        {
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                for (int i_4 = 0; i_4 < 16; i_4 += 2) 
                {
                    {
                        var_15 = ((/* implicit */unsigned char) var_4);
                        var_16 = ((/* implicit */_Bool) ((int) ((((/* implicit */int) ((_Bool) arr_6 [i_1] [i_1]))) * (((int) var_11)))));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (int i_5 = 4; i_5 < 14; i_5 += 2) 
                        {
                            arr_19 [i_1] [i_5 - 1] [i_5 - 1] = ((/* implicit */int) ((((long long int) var_8)) / (((((/* implicit */_Bool) var_9)) ? (var_11) : (((/* implicit */long long int) 647507865U))))));
                            arr_20 [i_1] [i_2] [i_2] [i_3] [i_1] [i_5] = ((/* implicit */int) var_0);
                            arr_21 [i_3] [i_1] = ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) arr_18 [i_1] [i_2] [i_3] [i_1] [i_2] [i_3] [i_2])) : (((/* implicit */int) var_0)));
                        }
                    }
                } 
            } 
        } 
        arr_22 [i_1] = ((/* implicit */signed char) (((!(((/* implicit */_Bool) var_6)))) ? (var_11) : (((/* implicit */long long int) var_6))));
        var_17 = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) max((2147418112U), (((/* implicit */unsigned int) (unsigned char)135))))) ? (((var_11) | (((/* implicit */long long int) ((/* implicit */int) (unsigned char)136))))) : (((/* implicit */long long int) ((((/* implicit */int) (unsigned short)65515)) * (((/* implicit */int) arr_16 [i_1] [i_1] [i_1] [i_1] [i_1]))))))), (((/* implicit */long long int) (!(((/* implicit */_Bool) max((var_10), (((/* implicit */unsigned int) var_6))))))))));
    }
    var_18 &= ((/* implicit */unsigned char) ((((/* implicit */unsigned int) var_4)) ^ (3647459425U)));
    /* LoopSeq 1 */
    for (unsigned char i_6 = 4; i_6 < 18; i_6 += 1) 
    {
        /* LoopSeq 4 */
        for (unsigned long long int i_7 = 0; i_7 < 22; i_7 += 2) 
        {
            /* LoopNest 2 */
            for (unsigned long long int i_8 = 2; i_8 < 21; i_8 += 1) 
            {
                for (signed char i_9 = 0; i_9 < 22; i_9 += 4) 
                {
                    {
                        arr_33 [i_6 - 4] [i_7] [i_8] [i_9] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((min((((/* implicit */long long int) var_3)), (5881482657894219783LL))), (((/* implicit */long long int) (!(((/* implicit */_Bool) var_12)))))))) ? (-1587025078) : (((/* implicit */int) var_1))));
                        arr_34 [i_8 - 1] = ((/* implicit */int) (-(((((unsigned int) arr_24 [i_8])) & (((647507854U) + (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)50)))))))));
                    }
                } 
            } 
            var_19 = ((((/* implicit */_Bool) (unsigned char)121)) ? (((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) var_9)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) -5881482657894219769LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)(-32767 - 1)))) : (647507871U)))) : (((((/* implicit */_Bool) var_13)) ? (arr_27 [i_7] [i_7] [i_7] [i_7]) : (((/* implicit */long long int) ((/* implicit */int) var_7)))))))) : (var_13));
            var_20 = ((/* implicit */int) min((((long long int) (unsigned char)247)), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_32 [i_6 + 2] [i_6 - 2])) ? (((((/* implicit */int) (signed char)28)) - (((/* implicit */int) arr_28 [i_6 - 3] [i_6 - 3] [i_6 - 3] [i_6 - 4])))) : (((/* implicit */int) max((var_7), (arr_30 [i_6] [i_6] [i_7] [i_6])))))))));
            var_21 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) var_4)) + (((((/* implicit */_Bool) 1032192)) ? (((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_25 [i_7]))) : (144115187807420416ULL))) : (((/* implicit */unsigned long long int) var_6))))));
        }
        for (int i_10 = 0; i_10 < 22; i_10 += 2) 
        {
            arr_37 [i_6 - 4] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)31))) * (14680064ULL)));
            var_22 = ((/* implicit */unsigned char) max((var_22), (((/* implicit */unsigned char) min((((/* implicit */long long int) ((((/* implicit */_Bool) -570200613)) && (((/* implicit */_Bool) ((8656555816935063330LL) - (((/* implicit */long long int) 3647459425U)))))))), (((((/* implicit */_Bool) min((var_10), (((/* implicit */unsigned int) (unsigned char)188))))) ? (min((((/* implicit */long long int) arr_26 [i_10] [i_10] [i_10])), (-2261552069845482500LL))) : (((/* implicit */long long int) ((/* implicit */int) ((var_1) && (((/* implicit */_Bool) 2147418112)))))))))))));
            var_23 = ((/* implicit */signed char) ((8388544) * (max(((-(((/* implicit */int) (unsigned char)96)))), (((/* implicit */int) ((var_11) != (((/* implicit */long long int) 262140U)))))))));
        }
        for (unsigned char i_11 = 0; i_11 < 22; i_11 += 1) /* same iter space */
        {
            arr_41 [i_11] = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) var_4)) : (var_10))))), (min((((/* implicit */unsigned long long int) -1032183)), (var_8)))));
            var_24 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_29 [i_11] [i_6] [i_6])), (var_13))))))) > (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (unsigned short)919)) : (((((/* implicit */int) var_7)) << (((((/* implicit */int) arr_30 [i_6] [i_11] [i_11] [i_11])) - (194)))))))));
            arr_42 [i_11] [i_11] [i_11] = ((unsigned long long int) ((unsigned long long int) var_10));
        }
        for (unsigned char i_12 = 0; i_12 < 22; i_12 += 1) /* same iter space */
        {
            arr_45 [i_6] [i_12] [i_6] = ((int) min((((/* implicit */unsigned int) (-(var_4)))), (arr_32 [i_6 - 2] [i_12])));
            var_25 = ((/* implicit */unsigned char) var_10);
            /* LoopNest 3 */
            for (unsigned long long int i_13 = 0; i_13 < 22; i_13 += 4) 
            {
                for (int i_14 = 1; i_14 < 21; i_14 += 1) 
                {
                    for (unsigned char i_15 = 3; i_15 < 20; i_15 += 2) 
                    {
                        {
                            var_26 = ((/* implicit */signed char) 1048560);
                            var_27 |= ((/* implicit */unsigned char) ((3647459424U) * (((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)0))))) ? (((/* implicit */int) ((((/* implicit */int) (unsigned char)59)) <= (((/* implicit */int) var_12))))) : (((/* implicit */int) ((unsigned char) var_3))))))));
                            var_28 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (~(((((/* implicit */_Bool) var_2)) ? (70368475742208LL) : (((/* implicit */long long int) ((/* implicit */int) var_3))))))))));
                            var_29 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) 3647459424U)) : (var_13))) * (((/* implicit */unsigned long long int) ((min((((/* implicit */long long int) arr_50 [i_6] [i_12] [i_12] [i_15 - 1] [i_12] [i_12])), (arr_27 [i_6] [i_12] [i_13] [i_14]))) & (70368475742201LL))))));
                        }
                    } 
                } 
            } 
        }
        var_30 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((int) arr_52 [i_6 - 1] [i_6 - 4]))) ? (((((/* implicit */_Bool) var_9)) ? (arr_52 [i_6 + 1] [i_6 - 3]) : (((/* implicit */int) var_7)))) : (((/* implicit */int) ((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) arr_52 [i_6 - 2] [i_6 - 2])))))));
    }
    var_31 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) var_8)) ? (var_11) : (((/* implicit */long long int) ((/* implicit */int) var_2))))), (((/* implicit */long long int) max((var_0), (((/* implicit */unsigned short) var_2)))))))) ? (((/* implicit */int) (unsigned char)247)) : (((/* implicit */int) ((signed char) var_10)))));
}
