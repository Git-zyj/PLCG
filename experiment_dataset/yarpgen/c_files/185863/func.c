/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185863
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185863 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185863
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
    var_12 = ((/* implicit */unsigned long long int) ((unsigned char) (-(((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (short)22630)) : (((/* implicit */int) var_9)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (unsigned char i_2 = 2; i_2 < 23; i_2 += 3) 
                {
                    for (int i_3 = 0; i_3 < 25; i_3 += 4) 
                    {
                        for (unsigned short i_4 = 1; i_4 < 24; i_4 += 4) 
                        {
                            {
                                var_13 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((signed char) -3858593393555330559LL))) ? (((((/* implicit */_Bool) -3858593393555330559LL)) ? (((/* implicit */int) (unsigned char)91)) : (1630642024))) : (-1630642027)))) ? (max((max((arr_0 [24U] [i_3]), (((/* implicit */int) arr_8 [i_0] [i_0] [i_0] [17U])))), (((/* implicit */int) (unsigned char)83)))) : ((+(((/* implicit */int) arr_7 [i_0] [i_1] [i_0])))));
                                arr_12 [i_0] [i_0] [i_1] [(unsigned short)19] [i_3] [i_3] [(_Bool)1] = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) (unsigned short)60295)))) ? (((long long int) (~(((/* implicit */int) var_2))))) : (((/* implicit */long long int) ((/* implicit */int) ((short) (-(((/* implicit */int) var_1)))))))));
                                var_14 = ((/* implicit */unsigned char) (_Bool)1);
                                var_15 = ((/* implicit */unsigned char) ((((/* implicit */int) ((signed char) (~(((/* implicit */int) (unsigned char)170)))))) <= (((((/* implicit */_Bool) min((-1630642027), (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) arr_1 [23ULL])) : (((/* implicit */int) ((arr_11 [(unsigned char)12] [i_1] [i_3] [i_2] [i_1] [i_0] [i_0]) || (((/* implicit */_Bool) var_10)))))))));
                                var_16 = ((/* implicit */unsigned int) min((((/* implicit */int) (!(((var_3) >= (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))))))), ((~((~(1630642004)))))));
                            }
                        } 
                    } 
                } 
                arr_13 [11LL] = ((/* implicit */unsigned char) max((max((((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) ((unsigned short) 234129370U))))), (((/* implicit */int) ((_Bool) (unsigned short)57344)))));
            }
        } 
    } 
}
