/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161882
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161882 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161882
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
    var_10 = ((/* implicit */unsigned long long int) ((var_0) << (((((/* implicit */int) var_6)) + (103)))));
    var_11 = ((/* implicit */long long int) max((var_11), (((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */long long int) -423929818)) / (-506170583108252396LL)))) ? ((((_Bool)1) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (unsigned short)3652)))) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (unsigned short)61883))))))))))));
    var_12 = ((/* implicit */unsigned int) (-(var_7)));
    /* LoopSeq 3 */
    for (signed char i_0 = 1; i_0 < 18; i_0 += 2) 
    {
        arr_2 [i_0] = (~(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((var_3) < (((/* implicit */unsigned long long int) var_0)))))) <= (var_2)))));
        var_13 = ((/* implicit */int) ((unsigned short) min((18446744073709551607ULL), (((/* implicit */unsigned long long int) (unsigned char)88)))));
        var_14 = ((/* implicit */long long int) (unsigned char)241);
        /* LoopNest 2 */
        for (long long int i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            for (signed char i_2 = 0; i_2 < 21; i_2 += 4) 
            {
                {
                    arr_9 [i_2] [i_0] [i_0] = ((/* implicit */unsigned short) ((min((max((8527557933124715595ULL), (((/* implicit */unsigned long long int) (signed char)-26)))), (((/* implicit */unsigned long long int) (unsigned short)40222)))) * (((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) arr_7 [13U] [i_1] [i_1] [i_1])) ? (((/* implicit */int) (unsigned short)44083)) : (((/* implicit */int) (signed char)-87)))))))));
                    var_15 = ((/* implicit */unsigned long long int) min((var_15), (((/* implicit */unsigned long long int) var_7))));
                }
            } 
        } 
    }
    for (unsigned short i_3 = 0; i_3 < 22; i_3 += 2) 
    {
        arr_13 [i_3] [i_3] = ((((((/* implicit */int) arr_11 [i_3] [i_3])) * (((/* implicit */int) arr_12 [i_3])))) | (((/* implicit */int) ((signed char) arr_12 [i_3]))));
        arr_14 [i_3] = ((/* implicit */unsigned int) ((unsigned char) ((((/* implicit */int) ((((/* implicit */int) (_Bool)1)) >= (845842451)))) ^ (((/* implicit */int) arr_12 [i_3])))));
    }
    for (long long int i_4 = 0; i_4 < 16; i_4 += 2) 
    {
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 16; i_5 += 4) 
        {
            for (long long int i_6 = 0; i_6 < 16; i_6 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 16; i_7 += 2) 
                    {
                        for (unsigned long long int i_8 = 0; i_8 < 16; i_8 += 1) 
                        {
                            {
                                var_16 = ((/* implicit */signed char) (unsigned short)15777);
                                arr_28 [i_6] [i_8] = ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) (+(((((/* implicit */int) var_5)) - (178487640)))))) : (max((arr_3 [i_4] [i_5]), (((/* implicit */unsigned long long int) (unsigned short)45397)))));
                                arr_29 [(short)9] [i_5] [i_6] [i_5] [i_8] = ((/* implicit */int) (-(((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)35))) & (((((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_4] [i_4]))) | (3865859246U)))))));
                                arr_30 [i_6] [i_7] [i_6] [i_6] [i_5] [(short)7] [i_4] |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((((/* implicit */_Bool) (signed char)114)) ? (((/* implicit */int) (signed char)0)) : (((/* implicit */int) (unsigned short)5217)))) : (((/* implicit */int) ((unsigned char) max((((/* implicit */long long int) (signed char)110)), (0LL)))))));
                            }
                        } 
                    } 
                    arr_31 [i_6] [i_5] [i_4] [i_4] = ((/* implicit */_Bool) (short)32767);
                }
            } 
        } 
        var_17 = ((/* implicit */short) min((((((/* implicit */int) ((signed char) arr_23 [i_4] [i_4] [i_4] [(unsigned short)2]))) == (((/* implicit */int) var_4)))), (((((/* implicit */_Bool) min((((/* implicit */unsigned char) var_5)), ((unsigned char)255)))) && (((/* implicit */_Bool) arr_22 [i_4] [i_4] [i_4] [15LL]))))));
    }
}
