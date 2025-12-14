/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170489
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170489 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170489
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
    var_13 = ((/* implicit */long long int) ((unsigned char) ((short) min(((unsigned char)238), ((unsigned char)113)))));
    var_14 = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)117)) | (((((/* implicit */int) var_7)) ^ (((/* implicit */int) (unsigned short)7))))))), (var_2)));
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 8; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            {
                arr_5 [i_0] [i_0] = ((((/* implicit */_Bool) (unsigned char)117)) ? (var_4) : (((/* implicit */int) var_12)));
                /* LoopNest 2 */
                for (unsigned short i_2 = 1; i_2 < 7; i_2 += 2) 
                {
                    for (unsigned short i_3 = 4; i_3 < 9; i_3 += 1) 
                    {
                        {
                            arr_11 [i_0] [i_1] [(unsigned short)4] [i_0] = ((/* implicit */int) var_6);
                            var_15 += ((/* implicit */unsigned char) ((((((/* implicit */_Bool) (unsigned char)104)) ? (((/* implicit */int) (signed char)92)) : (((/* implicit */int) (unsigned char)153)))) + (((/* implicit */int) ((((((/* implicit */_Bool) var_9)) && (((/* implicit */_Bool) 2544745U)))) && (((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) var_2)))))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (short i_4 = 0; i_4 < 11; i_4 += 4) 
                {
                    for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
                    {
                        {
                            arr_20 [i_0] = ((/* implicit */signed char) min((((long long int) ((((/* implicit */int) (unsigned char)255)) | (-115398860)))), ((~(var_8)))));
                            arr_21 [i_0] [i_1] [i_0] = ((/* implicit */long long int) ((min((((/* implicit */unsigned long long int) max((var_8), (((/* implicit */long long int) (unsigned short)65535))))), (min((var_11), (((/* implicit */unsigned long long int) (unsigned char)153)))))) + (min((max((((/* implicit */unsigned long long int) var_8)), (var_11))), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_1)) / (((/* implicit */int) var_1)))))))));
                        }
                    } 
                } 
                arr_22 [i_0] [(unsigned char)0] [i_1] = ((/* implicit */long long int) ((unsigned short) var_9));
                /* LoopNest 3 */
                for (unsigned int i_6 = 0; i_6 < 11; i_6 += 3) 
                {
                    for (unsigned short i_7 = 0; i_7 < 11; i_7 += 4) 
                    {
                        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                        {
                            {
                                var_16 &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */int) (unsigned char)143)), (((int) var_0))))) || (((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (short)255)) : (((/* implicit */int) (unsigned char)162))))), (min((var_11), (((/* implicit */unsigned long long int) var_12)))))))));
                                arr_30 [10LL] [i_0] [4] [4] [i_8] = (unsigned char)113;
                                var_17 += ((/* implicit */signed char) min(((unsigned char)124), (((/* implicit */unsigned char) var_1))));
                                var_18 ^= ((/* implicit */signed char) min((((/* implicit */int) (!(min((var_10), ((_Bool)1)))))), (((int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (unsigned char)162)) : (((/* implicit */int) var_12)))))));
                                var_19 = ((/* implicit */int) max((var_19), (((/* implicit */int) ((unsigned long long int) max((var_0), (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)139)) ^ (((/* implicit */int) (unsigned char)117)))))))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_20 = ((((((/* implicit */_Bool) max((((/* implicit */long long int) 1022)), (var_8)))) ? (min((9102751702804901366ULL), (((/* implicit */unsigned long long int) (unsigned char)153)))) : (var_0))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)123))));
    var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) (unsigned short)47150))));
}
