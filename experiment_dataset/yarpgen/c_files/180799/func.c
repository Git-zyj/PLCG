/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180799
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180799 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180799
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
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 2; i_1 < 15; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 16; i_2 += 2) 
            {
                {
                    arr_10 [(_Bool)1] [i_1] [(signed char)3] = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) min((var_13), (((/* implicit */unsigned char) var_14)))))))) ? ((-(((/* implicit */int) min((var_14), (var_6)))))) : ((-(((/* implicit */int) (_Bool)0))))));
                    var_20 ^= ((/* implicit */long long int) (+(-1922006848)));
                    var_21 = ((/* implicit */int) min((var_21), ((~(((((((/* implicit */int) var_10)) & (((/* implicit */int) (_Bool)1)))) & ((~(((/* implicit */int) (unsigned char)50))))))))));
                    var_22 = ((/* implicit */signed char) max((var_22), (((/* implicit */signed char) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_8 [i_1] [i_1] [i_1])) : (((/* implicit */int) arr_3 [i_0])))), (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_8 [i_0] [i_1] [i_2]))))))) ? (((/* implicit */int) min((min((arr_8 [i_0] [i_0] [i_0]), (((/* implicit */short) (_Bool)1)))), (((/* implicit */short) min((arr_2 [i_0]), (((/* implicit */signed char) (_Bool)1)))))))) : ((-(max((((/* implicit */int) (unsigned char)1)), (var_0))))))))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_3 = 0; i_3 < 14; i_3 += 4) 
    {
        for (long long int i_4 = 0; i_4 < 14; i_4 += 4) 
        {
            {
                var_23 = ((/* implicit */int) (((+(max((((/* implicit */int) (_Bool)1)), (var_12))))) >= (((/* implicit */int) ((((/* implicit */int) min(((short)23279), (var_16)))) >= ((+(131071))))))));
                /* LoopNest 2 */
                for (signed char i_5 = 2; i_5 < 11; i_5 += 2) 
                {
                    for (unsigned short i_6 = 0; i_6 < 14; i_6 += 4) 
                    {
                        {
                            var_24 = ((/* implicit */signed char) min((var_24), (((/* implicit */signed char) ((((/* implicit */_Bool) (short)22721)) ? (((/* implicit */int) (signed char)-1)) : (((/* implicit */int) (signed char)-1)))))));
                            var_25 = ((/* implicit */signed char) ((((/* implicit */_Bool) (short)-27592)) ? (((/* implicit */int) (unsigned char)5)) : (((/* implicit */int) (short)22721))));
                        }
                    } 
                } 
                arr_24 [i_3] [i_3] [i_3] = ((/* implicit */signed char) max((((((/* implicit */_Bool) (((_Bool)1) ? (-1030500661) : (((/* implicit */int) arr_8 [i_4] [i_3] [i_3]))))) ? (((/* implicit */int) min(((signed char)9), (((/* implicit */signed char) (_Bool)1))))) : (((/* implicit */int) max((arr_20 [i_3] [i_3] [i_3] [i_3] [i_4]), (arr_15 [i_3] [i_4] [i_4])))))), (max(((~(((/* implicit */int) arr_4 [i_3] [i_4] [i_4])))), (((/* implicit */int) ((((/* implicit */int) arr_5 [i_3] [i_3])) == (var_12))))))));
                arr_25 [(unsigned short)1] [(unsigned short)1] [i_4] = ((/* implicit */unsigned char) max((((((((/* implicit */_Bool) (short)23966)) ? (((/* implicit */int) (short)1413)) : (((/* implicit */int) var_13)))) / (min((((/* implicit */int) (unsigned short)65531)), (var_12))))), (min((((((/* implicit */_Bool) var_18)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_19)))), (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) <= (-432300878))))))));
            }
        } 
    } 
    var_26 = ((((/* implicit */int) (unsigned char)40)) / (((/* implicit */int) (_Bool)1)));
    var_27 = (~(max(((-(((/* implicit */int) (signed char)19)))), (((((/* implicit */_Bool) var_13)) ? (0) : (((/* implicit */int) (short)-22747)))))));
}
