/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160869
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160869 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160869
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
    var_20 = ((/* implicit */short) min((((/* implicit */unsigned int) (signed char)-8)), (577164559U)));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        for (signed char i_1 = 3; i_1 < 17; i_1 += 1) 
        {
            {
                var_21 -= ((/* implicit */short) min((((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) >= (arr_3 [i_0] [(_Bool)1] [(_Bool)1]))))) - (min((arr_3 [10ULL] [16U] [16U]), (((/* implicit */unsigned int) arr_2 [i_0])))))), (((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_0 [i_0])))) < (((/* implicit */int) arr_4 [(unsigned char)8] [(unsigned char)8])))))));
                arr_5 [i_1] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */int) (signed char)20)) > (((/* implicit */int) (signed char)0))));
                /* LoopNest 2 */
                for (unsigned int i_2 = 1; i_2 < 16; i_2 += 1) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            var_22 = ((/* implicit */unsigned int) min((var_22), (((/* implicit */unsigned int) (-((+(((/* implicit */int) (short)-7194)))))))));
                            var_23 = ((/* implicit */unsigned int) (+(-2042339404)));
                            var_24 = ((((/* implicit */_Bool) (short)-21518)) ? (((/* implicit */int) (signed char)46)) : (-1275227696));
                            arr_11 [i_0] [i_1] [i_1] [i_1] = ((/* implicit */short) var_1);
                        }
                    } 
                } 
                var_25 = ((/* implicit */signed char) (unsigned short)3282);
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned char i_4 = 4; i_4 < 13; i_4 += 1) 
    {
        for (signed char i_5 = 3; i_5 < 12; i_5 += 3) 
        {
            for (signed char i_6 = 0; i_6 < 14; i_6 += 3) 
            {
                {
                    var_26 = ((/* implicit */unsigned short) (((-((-(var_9))))) == (((/* implicit */long long int) ((((/* implicit */_Bool) (+(3304142698U)))) ? (((/* implicit */int) ((((/* implicit */int) var_5)) >= (((/* implicit */int) var_11))))) : (((/* implicit */int) (short)20664)))))));
                    /* LoopNest 2 */
                    for (unsigned int i_7 = 0; i_7 < 14; i_7 += 4) 
                    {
                        for (unsigned short i_8 = 0; i_8 < 14; i_8 += 1) 
                        {
                            {
                                arr_23 [i_4] [(unsigned short)7] [i_5 - 3] [i_4] [i_7] [i_8] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [(signed char)13])) ? (((((/* implicit */_Bool) (~(var_9)))) ? ((~(((/* implicit */int) arr_18 [i_8] [i_7] [1LL] [i_4])))) : (((/* implicit */int) ((_Bool) (short)63))))) : (((((/* implicit */_Bool) ((var_14) & (((/* implicit */unsigned int) -972702107))))) ? (((/* implicit */int) min(((short)-1), (((/* implicit */short) (signed char)-1))))) : (((/* implicit */int) arr_0 [i_4 - 2]))))));
                                var_27 = ((/* implicit */signed char) (short)255);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (signed char i_9 = 0; i_9 < 14; i_9 += 3) 
                    {
                        for (unsigned short i_10 = 0; i_10 < 14; i_10 += 3) 
                        {
                            {
                                arr_30 [i_4 - 3] [i_5 - 1] [i_6] [i_6] &= ((/* implicit */unsigned short) (-(max((((/* implicit */unsigned int) arr_10 [i_5 + 1] [i_4] [i_4 + 1] [i_4])), ((~(arr_14 [i_4] [i_5])))))));
                                var_28 = ((/* implicit */short) ((((/* implicit */_Bool) (-(((var_14) % (((/* implicit */unsigned int) ((/* implicit */int) (short)-29925)))))))) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (short)13176))));
                                arr_31 [i_4 - 4] [(unsigned short)8] [i_6] [i_9] [i_10] = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) 11938038271156043158ULL)))) % (((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-48)) ? (var_4) : (((/* implicit */unsigned int) arr_21 [i_4] [i_4] [i_4] [i_4]))))) ? (var_13) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)240)))))));
                                arr_32 [i_4] [i_5] [i_6] [(short)6] [i_10] [i_10] [i_9] = ((((/* implicit */int) var_11)) * ((~(((/* implicit */int) arr_0 [i_5 - 1])))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
