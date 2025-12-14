/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159763
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159763 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159763
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
    for (unsigned char i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        for (short i_1 = 2; i_1 < 19; i_1 += 3) 
        {
            {
                var_11 = ((/* implicit */long long int) ((((((/* implicit */int) arr_1 [i_1 + 4] [i_1 - 1])) == ((~(((/* implicit */int) (signed char)117)))))) ? (((((/* implicit */_Bool) (unsigned char)0)) ? (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_4 [i_1] [i_1] [i_0])) : (((/* implicit */int) arr_1 [i_0] [i_1 + 3])))) : (((/* implicit */int) (unsigned char)109)))) : (((/* implicit */int) (!((!(((/* implicit */_Bool) arr_0 [i_1 + 4])))))))));
                /* LoopSeq 2 */
                for (short i_2 = 2; i_2 < 22; i_2 += 2) 
                {
                    arr_7 [i_0] [i_0] [i_2] [i_2 - 2] = ((/* implicit */_Bool) arr_6 [i_1] [20LL]);
                    var_12 = ((/* implicit */unsigned short) max((var_12), (((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) 4294963200U)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_7)))), ((+(((/* implicit */int) arr_2 [i_2]))))))) ? (((((/* implicit */_Bool) (unsigned short)16256)) ? (((((((/* implicit */int) var_4)) + (2147483647))) << (((var_1) - (15070918978627582256ULL))))) : (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_4 [i_0] [i_1] [i_2])) : (((/* implicit */int) var_3)))))) : (((/* implicit */int) var_8)))))));
                }
                for (unsigned long long int i_3 = 3; i_3 < 21; i_3 += 2) 
                {
                    var_13 = ((/* implicit */unsigned char) arr_10 [i_3] [i_1 + 3]);
                    arr_12 [i_0] [i_1] [i_1] [(unsigned short)8] = ((/* implicit */int) ((((/* implicit */_Bool) var_2)) ? (max((8045048422705994613LL), (-13LL))) : (((arr_3 [i_0] [i_3 - 3] [i_1 + 1]) / (((/* implicit */long long int) ((((/* implicit */int) var_0)) * (((/* implicit */int) arr_2 [i_3])))))))));
                    var_14 = ((/* implicit */signed char) max((var_14), (((/* implicit */signed char) (+(((/* implicit */int) (unsigned char)73)))))));
                    var_15 = ((/* implicit */unsigned char) (-(((/* implicit */int) (unsigned char)128))));
                }
                arr_13 [i_0] [i_1] [i_0] = ((/* implicit */_Bool) max((((/* implicit */int) (!(((/* implicit */_Bool) var_2))))), (((((/* implicit */_Bool) (unsigned char)223)) ? (((/* implicit */int) ((((/* implicit */int) (unsigned char)203)) < (-1450999839)))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_0])))))))));
            }
        } 
    } 
    var_16 = (~(((/* implicit */int) var_5)));
    var_17 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (signed char)2))));
    var_18 &= ((/* implicit */unsigned int) 13835058055282163712ULL);
}
