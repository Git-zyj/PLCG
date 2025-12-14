/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137069
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137069 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137069
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
    for (int i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            {
                var_13 = ((/* implicit */unsigned int) min((var_13), (((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) var_2)) == (arr_4 [i_0] [i_1] [i_1])))) >= (((((/* implicit */int) var_9)) * (((/* implicit */int) var_3))))))) > (((/* implicit */int) ((((/* implicit */int) var_3)) != (((/* implicit */int) arr_2 [i_0]))))))))));
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 2; i_2 < 20; i_2 += 1) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            var_14 = ((/* implicit */unsigned short) max((var_14), (min((min((((/* implicit */unsigned short) (signed char)-57)), ((unsigned short)64533))), (((/* implicit */unsigned short) max((var_9), (((/* implicit */unsigned char) arr_7 [i_2] [i_2 - 2] [i_1])))))))));
                            var_15 = ((/* implicit */signed char) max((((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) % (((/* implicit */int) var_9))))), (max((0U), (((/* implicit */unsigned int) (signed char)-22))))));
                        }
                    } 
                } 
                arr_13 [i_1] [i_0] [i_0] = ((/* implicit */unsigned long long int) min((min((((/* implicit */unsigned int) (_Bool)1)), (4294967276U))), (min((((/* implicit */unsigned int) (_Bool)1)), (var_12)))));
                var_16 = ((/* implicit */signed char) min((((368630116U) >> (((/* implicit */int) (_Bool)1)))), (max((max((((/* implicit */unsigned int) var_7)), (5U))), (var_5)))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned long long int i_4 = 0; i_4 < 13; i_4 += 4) 
    {
        for (unsigned long long int i_5 = 0; i_5 < 13; i_5 += 3) 
        {
            {
                /* LoopNest 3 */
                for (unsigned long long int i_6 = 2; i_6 < 11; i_6 += 3) 
                {
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                    {
                        for (int i_8 = 2; i_8 < 9; i_8 += 4) 
                        {
                            {
                                var_17 = ((/* implicit */_Bool) min((((((/* implicit */int) arr_21 [i_6 - 2])) * (((/* implicit */int) arr_21 [i_6 - 2])))), (((/* implicit */int) ((((/* implicit */_Bool) var_9)) && ((_Bool)1))))));
                                arr_29 [i_7] [i_5] [i_6 + 2] [i_7] [i_8] = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) min((((/* implicit */signed char) (_Bool)1)), ((signed char)-57)))), (max((((/* implicit */unsigned long long int) min((((/* implicit */int) var_2)), (arr_17 [i_6 + 1])))), (((arr_19 [i_4]) ^ (((/* implicit */unsigned long long int) var_5))))))));
                                var_18 = ((/* implicit */unsigned long long int) max((var_18), (((/* implicit */unsigned long long int) ((min((var_5), (((/* implicit */unsigned int) (signed char)120)))) << (((min((((/* implicit */int) var_10)), (arr_15 [i_6 + 1] [i_8 - 1]))) - (16779))))))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned short i_9 = 0; i_9 < 13; i_9 += 3) 
                {
                    for (int i_10 = 3; i_10 < 10; i_10 += 3) 
                    {
                        {
                            arr_36 [i_9] [i_10] [i_9] = ((/* implicit */unsigned int) min((min((min((((/* implicit */unsigned long long int) 966846888)), (14003951121507629750ULL))), (((var_8) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_4] [i_4] [i_10]))))))), (((/* implicit */unsigned long long int) max(((_Bool)1), (arr_24 [i_10 + 2] [i_10 + 2] [i_10]))))));
                            /* LoopSeq 1 */
                            for (unsigned short i_11 = 4; i_11 < 10; i_11 += 1) 
                            {
                                var_19 = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_24 [i_11 + 3] [i_11 + 1] [i_10 - 1]))) - (4148630122U)))), (min((((/* implicit */unsigned long long int) arr_22 [i_10 + 2])), (4442792952201921874ULL)))));
                                var_20 *= ((/* implicit */unsigned int) ((min((((/* implicit */unsigned long long int) arr_15 [i_10 + 3] [i_11 + 3])), (arr_9 [i_10 + 1] [i_11] [i_11 - 3] [i_11] [i_11 + 3]))) & (((/* implicit */unsigned long long int) max((max((((/* implicit */unsigned int) arr_2 [i_9])), (var_5))), (((/* implicit */unsigned int) ((arr_4 [i_9] [i_10 + 3] [i_9]) != (((/* implicit */int) arr_35 [i_4] [i_4] [i_4] [i_4]))))))))));
                                var_21 = ((/* implicit */unsigned int) min((var_21), (min((((var_12) << (((arr_34 [i_11 + 3] [12U] [i_10 - 2] [i_10 - 3]) - (4038608266661737927LL))))), (((/* implicit */unsigned int) max((var_4), (((/* implicit */unsigned short) (signed char)-57)))))))));
                                var_22 = ((/* implicit */int) max((((((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */unsigned char) var_3)), (var_2))))) - (max((((/* implicit */long long int) (signed char)57)), (arr_34 [i_9] [i_9] [i_9] [i_10 - 1]))))), (((/* implicit */long long int) min((((((/* implicit */_Bool) (unsigned short)65535)) && (((/* implicit */_Bool) arr_26 [i_4] [i_4] [i_4] [i_4])))), (((arr_33 [i_4] [i_4] [i_5] [i_9] [i_10] [i_9]) == (((/* implicit */unsigned long long int) arr_39 [i_4] [i_5] [i_9] [(_Bool)1] [i_11])))))))));
                            }
                            var_23 = ((/* implicit */unsigned int) min((min((arr_9 [i_10 - 1] [i_10 + 3] [i_10 + 2] [i_10 + 3] [i_10]), (((/* implicit */unsigned long long int) var_9)))), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_2)) > (arr_39 [i_10] [i_10 - 1] [i_10 - 2] [i_10 - 2] [i_10 - 3]))))));
                            /* LoopSeq 2 */
                            for (unsigned char i_12 = 0; i_12 < 13; i_12 += 3) 
                            {
                                var_24 ^= ((/* implicit */unsigned short) min((((((/* implicit */unsigned int) min((-2121236086), (arr_0 [i_5])))) / (min((((/* implicit */unsigned int) 2147483647)), (var_12))))), (max((((/* implicit */unsigned int) ((((/* implicit */int) (signed char)68)) > (((/* implicit */int) (unsigned char)255))))), (max((var_0), (((/* implicit */unsigned int) arr_22 [i_10]))))))));
                                var_25 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) 4172860876U)) % (4644845182548547094ULL)));
                            }
                            for (unsigned long long int i_13 = 0; i_13 < 13; i_13 += 4) 
                            {
                                var_26 = ((/* implicit */unsigned int) min((((6800435966411747043ULL) >> (((4644845182548547094ULL) - (4644845182548547050ULL))))), (((/* implicit */unsigned long long int) min((((/* implicit */long long int) var_9)), (-4298291033088864495LL))))));
                                var_27 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((14003951121507629752ULL), (((/* implicit */unsigned long long int) 6931162853883859330LL))))) && (((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (_Bool)1)), (var_6))))));
                                arr_45 [i_10] [i_5] [i_9] [i_10] [6ULL] [i_13] = ((/* implicit */long long int) min((max((var_8), (((/* implicit */unsigned long long int) arr_20 [i_10 - 3] [2])))), (min((((/* implicit */unsigned long long int) min((arr_5 [i_4] [i_4] [i_10]), (((/* implicit */unsigned short) (signed char)125))))), (7531623411100501253ULL)))));
                            }
                        }
                    } 
                } 
                arr_46 [i_4] = ((/* implicit */int) max((min((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)13)) - (((/* implicit */int) var_10))))), (14003951121507629756ULL))), (((((/* implicit */unsigned long long int) ((((/* implicit */int) var_10)) ^ (((/* implicit */int) arr_7 [i_4] [i_4] [i_4]))))) | (3ULL)))));
            }
        } 
    } 
}
