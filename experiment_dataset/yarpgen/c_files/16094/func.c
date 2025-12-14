/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16094
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16094 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16094
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
    var_15 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((var_2) ? ((-(((/* implicit */int) (short)-1291)))) : (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) <= (-4818621079102351206LL))))))) - (max((((/* implicit */long long int) (unsigned char)229)), (-4818621079102351206LL)))));
    var_16 = ((/* implicit */long long int) ((short) ((short) var_10)));
    var_17 = ((/* implicit */unsigned int) ((int) (_Bool)0));
    var_18 = ((/* implicit */int) ((((/* implicit */_Bool) 4818621079102351203LL)) ? ((-(((((/* implicit */_Bool) -4818621079102351182LL)) ? (((/* implicit */long long int) 1255785802)) : (var_8))))) : (((/* implicit */long long int) ((/* implicit */int) ((4502880948686683277LL) == (4502880948686683277LL)))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        /* LoopSeq 1 */
        for (long long int i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            arr_4 [i_0] [i_0] = ((/* implicit */unsigned char) var_1);
            arr_5 [i_0] [i_1] = ((/* implicit */long long int) (~(((/* implicit */int) arr_0 [i_1]))));
        }
        arr_6 [i_0] [i_0] = ((/* implicit */long long int) ((((((/* implicit */_Bool) -4818621079102351203LL)) ? (4818621079102351203LL) : (4818621079102351201LL))) < (432345564227567616LL)));
        /* LoopNest 2 */
        for (long long int i_2 = 0; i_2 < 20; i_2 += 1) 
        {
            for (long long int i_3 = 0; i_3 < 20; i_3 += 3) 
            {
                {
                    arr_11 [i_0] [i_0] [i_3] = ((/* implicit */unsigned long long int) ((long long int) (_Bool)1));
                    arr_12 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((long long int) 9053960800779356609LL))) ? (((/* implicit */long long int) ((/* implicit */int) ((4818621079102351213LL) <= (6481030257413933827LL))))) : (((((/* implicit */_Bool) arr_8 [i_0] [i_2] [i_3])) ? (arr_1 [i_0]) : (arr_1 [i_0])))));
                    arr_13 [i_0] [i_2] [i_3] [i_0] = ((/* implicit */short) ((((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) & (var_6))) < (arr_3 [i_2] [i_0])));
                    arr_14 [i_0] [i_0] [(_Bool)1] = ((((var_2) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (arr_3 [(_Bool)1] [(_Bool)1]))) > (((/* implicit */long long int) ((((/* implicit */_Bool) (short)6941)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_7 [i_0] [i_0] [i_0]))))));
                    /* LoopNest 2 */
                    for (long long int i_4 = 0; i_4 < 20; i_4 += 3) 
                    {
                        for (long long int i_5 = 0; i_5 < 20; i_5 += 1) 
                        {
                            {
                                arr_20 [i_0] [12LL] [12LL] [i_4] [i_5] [i_0] [i_0] = ((long long int) var_12);
                                arr_21 [i_0] [i_0] [i_3] [i_0] [i_3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) var_12))))) ? (((/* implicit */long long int) ((/* implicit */int) ((_Bool) (short)16819)))) : (((((/* implicit */_Bool) var_5)) ? (arr_3 [i_0] [i_0]) : (var_5)))));
                                arr_22 [i_0] [i_0] [i_0] [16LL] [i_0] = ((/* implicit */_Bool) (~(((/* implicit */int) (short)-1910))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
}
