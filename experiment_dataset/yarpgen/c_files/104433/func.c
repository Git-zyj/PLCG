/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104433
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104433 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104433
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
    for (short i_0 = 3; i_0 < 15; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (unsigned char i_2 = 0; i_2 < 16; i_2 += 2) 
                {
                    for (unsigned int i_3 = 0; i_3 < 16; i_3 += 2) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 16; i_4 += 4) 
                        {
                            {
                                arr_12 [i_0] [i_1] [i_2] [i_4] [12] [i_3] = ((/* implicit */_Bool) ((short) ((unsigned short) ((((/* implicit */_Bool) (unsigned short)0)) ? (-7078096729174173689LL) : (7078096729174173688LL)))));
                                var_11 = ((/* implicit */_Bool) min((var_11), (((/* implicit */_Bool) min((((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */int) (unsigned short)4776)) : (((/* implicit */int) (unsigned short)65534)))), (min((((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) (unsigned short)31531)))), (0))))))));
                                var_12 *= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) min(((~(((/* implicit */int) (unsigned short)65479)))), (2139095040))))));
                                arr_13 [i_1] [i_1] [i_4] = ((/* implicit */unsigned char) ((_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) (unsigned short)65535))))) ? (((((/* implicit */_Bool) (unsigned short)57)) ? (((/* implicit */int) (short)32767)) : (((/* implicit */int) (unsigned short)57)))) : (((/* implicit */int) (unsigned short)22402)))));
                                arr_14 [i_0] [(unsigned short)6] [8LL] [i_0 - 3] [8LL] |= ((/* implicit */unsigned char) max((((/* implicit */int) ((_Bool) max((((/* implicit */long long int) (_Bool)0)), (-7078096729174173689LL))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)65520)) ? (((/* implicit */int) (signed char)127)) : (((/* implicit */int) (short)-29173))))) ? (((/* implicit */int) ((_Bool) (-2147483647 - 1)))) : (((/* implicit */int) min(((unsigned short)1), ((unsigned short)57))))))));
                            }
                        } 
                    } 
                } 
                var_13 = ((/* implicit */long long int) ((unsigned char) (((_Bool)1) ? (((/* implicit */int) (unsigned char)67)) : (((/* implicit */int) (short)-29162)))));
                arr_15 [i_0] [i_0] = ((/* implicit */long long int) 0);
                arr_16 [9U] = ((/* implicit */unsigned int) (+(min((((((/* implicit */_Bool) (short)18584)) ? (((/* implicit */int) (unsigned char)25)) : (((/* implicit */int) (unsigned char)15)))), (((/* implicit */int) min((((/* implicit */unsigned short) (unsigned char)248)), ((unsigned short)65456))))))));
            }
        } 
    } 
    var_14 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) ((short) (unsigned short)57)))))) ? (((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (unsigned char)255)) : (-1)))) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : ((+(7078096729174173689LL))))) : (7078096729174173675LL)));
    var_15 = ((/* implicit */long long int) (~(((/* implicit */int) var_2))));
    /* LoopNest 2 */
    for (short i_5 = 0; i_5 < 22; i_5 += 3) 
    {
        for (signed char i_6 = 0; i_6 < 22; i_6 += 2) 
        {
            {
                arr_21 [i_5] [i_5] [i_5] = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */int) (short)10841)) : (((/* implicit */int) (signed char)7)))))));
                arr_22 [i_5] [i_6] [i_5] = ((/* implicit */unsigned char) ((unsigned long long int) (+(((((/* implicit */_Bool) (unsigned short)65534)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-1))) : (2063926851U))))));
            }
        } 
    } 
}
