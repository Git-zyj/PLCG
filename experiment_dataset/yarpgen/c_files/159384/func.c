/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159384
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159384 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159384
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
    var_13 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((unsigned char) (short)-21027)), (var_8)))) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (unsigned char)133))));
    /* LoopNest 2 */
    for (short i_0 = 2; i_0 < 15; i_0 += 1) 
    {
        for (int i_1 = 1; i_1 < 14; i_1 += 1) 
        {
            {
                var_14 = ((/* implicit */unsigned short) max((var_14), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) (short)21826)) << (((((/* implicit */int) var_6)) - (8480)))))) ? (((((/* implicit */int) arr_5 [i_0 - 2])) % (((/* implicit */int) arr_5 [i_0 + 1])))) : (((((/* implicit */int) arr_5 [i_0 + 1])) >> (((var_5) - (4347133964663257006ULL))))))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 17; i_2 += 2) 
                {
                    for (short i_3 = 1; i_3 < 14; i_3 += 4) 
                    {
                        {
                            arr_13 [i_0] [i_1] = ((/* implicit */short) var_1);
                            var_15 = ((/* implicit */unsigned char) (((~(arr_8 [i_3 - 1] [i_3]))) % (((/* implicit */long long int) ((int) arr_4 [i_1 + 1] [i_3 + 1])))));
                            arr_14 [i_0 - 2] = ((/* implicit */unsigned short) var_11);
                            var_16 = ((/* implicit */unsigned long long int) max((var_16), (((/* implicit */unsigned long long int) (-(((/* implicit */int) (!(((var_4) < (((/* implicit */int) arr_11 [i_0] [i_0] [i_0] [i_0] [i_1 + 2] [i_0]))))))))))));
                        }
                    } 
                } 
                var_17 = ((((/* implicit */int) (unsigned char)160)) | ((-(((/* implicit */int) min(((unsigned char)90), ((unsigned char)115)))))));
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) -4279614)) ? (((/* implicit */int) (!(((/* implicit */_Bool) 8039113618254725787ULL))))) : (((((/* implicit */int) min(((unsigned char)140), (var_8)))) << (((((-1352549624) - (var_12))) - (792749451)))))));
}
