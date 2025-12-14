/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155326
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155326 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155326
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
    var_15 = ((/* implicit */unsigned short) ((short) ((((/* implicit */_Bool) ((unsigned int) var_4))) ? (((((/* implicit */_Bool) (signed char)-1)) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) var_4))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) 1747665378)) ? (((/* implicit */int) (signed char)(-127 - 1))) : (((/* implicit */int) var_7))))))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        for (unsigned int i_1 = 1; i_1 < 9; i_1 += 3) 
        {
            {
                /* LoopNest 3 */
                for (unsigned short i_2 = 0; i_2 < 10; i_2 += 3) 
                {
                    for (unsigned long long int i_3 = 1; i_3 < 7; i_3 += 4) 
                    {
                        for (int i_4 = 0; i_4 < 10; i_4 += 2) 
                        {
                            {
                                var_16 = ((/* implicit */unsigned long long int) min((var_16), (((/* implicit */unsigned long long int) ((unsigned int) (((!(((/* implicit */_Bool) (unsigned short)31296)))) || (((/* implicit */_Bool) arr_5 [i_0] [i_0]))))))));
                                var_17 = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) max((((/* implicit */short) (signed char)127)), (arr_8 [i_4] [i_3 + 3] [i_2] [(short)9] [1LL])))) ? ((~(((/* implicit */int) arr_9 [i_3 - 1])))) : ((-(((/* implicit */int) arr_7 [i_4] [0U] [i_2] [0U])))))), (((/* implicit */int) ((_Bool) ((_Bool) (signed char)(-127 - 1)))))));
                                arr_12 [i_1 - 1] [(short)7] = ((/* implicit */long long int) ((((/* implicit */long long int) ((int) min((-1655052761), (((/* implicit */int) (_Bool)1)))))) > (((((((/* implicit */_Bool) arr_6 [i_0] [i_0])) ? (((/* implicit */long long int) 3675349656U)) : (var_6))) / ((~(var_6)))))));
                                arr_13 [i_0] [0U] [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((unsigned int) (!(((/* implicit */_Bool) ((unsigned int) arr_3 [(short)7]))))));
                            }
                        } 
                    } 
                } 
                arr_14 [i_0] [i_1] = ((/* implicit */long long int) ((int) ((unsigned short) min((((/* implicit */long long int) (unsigned short)30064)), (-7743690361145900563LL)))));
                var_18 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((1679974970449593914LL), (((/* implicit */long long int) -1295566372))))) ? (((((/* implicit */_Bool) arr_9 [i_1])) ? (arr_4 [i_0] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)0))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (unsigned char)186)) : (((/* implicit */int) (_Bool)1)))))))) && (((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_14)) == (((/* implicit */int) (signed char)-121)))))) / (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (arr_4 [i_0] [8]))))))));
                var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned int) ((signed char) var_11)))) ? (((((/* implicit */_Bool) ((unsigned int) arr_8 [3LL] [(short)0] [0LL] [i_0] [(short)5]))) ? (((/* implicit */long long int) ((unsigned int) var_5))) : (((long long int) var_8)))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) (unsigned char)79)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) : (4294967295U))))))));
            }
        } 
    } 
    var_20 = ((/* implicit */_Bool) (+(max((((var_9) / (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)217))))), (((/* implicit */unsigned int) ((_Bool) var_12)))))));
}
