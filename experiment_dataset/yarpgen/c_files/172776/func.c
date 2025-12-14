/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172776
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172776 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172776
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
    for (unsigned long long int i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        for (signed char i_1 = 1; i_1 < 16; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (long long int i_2 = 1; i_2 < 17; i_2 += 4) 
                {
                    for (short i_3 = 0; i_3 < 18; i_3 += 2) 
                    {
                        {
                            var_14 = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((signed char) (_Bool)0))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)45381))))))))));
                            var_15 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((arr_7 [i_0] [i_2] [i_3]), (((/* implicit */short) (signed char)-4))))) ? (((/* implicit */int) min((((/* implicit */unsigned short) arr_3 [i_1])), (arr_2 [i_1 - 1] [i_1 + 2])))) : (max(((-(((/* implicit */int) (signed char)80)))), (((/* implicit */int) (!(((/* implicit */_Bool) -511036462)))))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (short i_4 = 3; i_4 < 16; i_4 += 4) 
                {
                    for (short i_5 = 2; i_5 < 16; i_5 += 3) 
                    {
                        {
                            arr_16 [i_0] [i_1] [4ULL] |= ((/* implicit */signed char) ((unsigned int) max((((/* implicit */unsigned char) (signed char)-50)), ((unsigned char)251))));
                            var_16 = ((/* implicit */signed char) arr_15 [i_5] [i_1] [i_0]);
                            var_17 = ((/* implicit */unsigned char) ((unsigned short) 3873901997U));
                            /* LoopSeq 1 */
                            for (unsigned long long int i_6 = 0; i_6 < 18; i_6 += 4) 
                            {
                                arr_20 [i_0] [i_1] [(short)4] [i_5] [i_6] = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */long long int) (signed char)-43)), ((((_Bool)1) ? (-1LL) : (((/* implicit */long long int) 1290127130))))))) ? ((+(max((-846586114), (((/* implicit */int) arr_12 [i_0] [i_0] [i_1] [i_0])))))) : ((~(((/* implicit */int) max(((unsigned short)53933), (((/* implicit */unsigned short) (short)-12360)))))))));
                                var_18 += ((/* implicit */unsigned char) max((9ULL), (((/* implicit */unsigned long long int) (short)-3374))));
                            }
                            var_19 = ((/* implicit */short) 843970394U);
                        }
                    } 
                } 
                var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max(((+(((/* implicit */int) (signed char)120)))), ((+(((/* implicit */int) (short)-3372))))))) ? (((/* implicit */unsigned int) max(((+(((/* implicit */int) (unsigned short)49121)))), ((~(((/* implicit */int) arr_12 [i_0] [i_1] [i_1] [i_1 + 1]))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-12332)) ? (((/* implicit */int) (unsigned short)65533)) : (1118927999)))) ? ((~(4294967295U))) : (((/* implicit */unsigned int) (+(((/* implicit */int) arr_0 [i_1 + 1])))))))));
                var_21 &= ((/* implicit */_Bool) ((((_Bool) max((3220676349U), (4294967295U)))) ? (((/* implicit */int) ((_Bool) 4263708502U))) : (((/* implicit */int) (!(((/* implicit */_Bool) max((18446744073709551615ULL), (((/* implicit */unsigned long long int) (_Bool)1))))))))));
                var_22 = ((/* implicit */unsigned short) (~(18446744073709551612ULL)));
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned int i_7 = 0; i_7 < 12; i_7 += 1) 
    {
        for (unsigned char i_8 = 0; i_8 < 12; i_8 += 4) 
        {
            for (unsigned short i_9 = 0; i_9 < 12; i_9 += 2) 
            {
                {
                    var_23 ^= ((/* implicit */long long int) min(((+(((((/* implicit */_Bool) 1118927998)) ? (((/* implicit */int) (unsigned short)35533)) : (((/* implicit */int) (unsigned short)16414)))))), (((((/* implicit */_Bool) (short)12360)) ? (((/* implicit */int) (unsigned short)58125)) : (((/* implicit */int) (unsigned short)27675))))));
                    arr_27 [i_7] [i_7] [i_8] [i_9] = ((/* implicit */short) max((((/* implicit */unsigned char) (!((!(((/* implicit */_Bool) 2968828817U))))))), (((unsigned char) min((((/* implicit */unsigned int) 0)), (4263708510U))))));
                }
            } 
        } 
    } 
}
