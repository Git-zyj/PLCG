/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139902
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139902 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139902
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
    /* LoopSeq 3 */
    for (unsigned short i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        var_17 = ((/* implicit */unsigned char) min((var_17), ((unsigned char)171)));
        var_18 = ((/* implicit */unsigned int) ((_Bool) (unsigned char)31));
        var_19 = ((/* implicit */unsigned short) var_0);
        /* LoopNest 3 */
        for (unsigned long long int i_1 = 2; i_1 < 20; i_1 += 4) 
        {
            for (long long int i_2 = 3; i_2 < 22; i_2 += 4) 
            {
                for (int i_3 = 4; i_3 < 22; i_3 += 4) 
                {
                    {
                        arr_11 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) var_5)), ((-(18446744073709551611ULL)))));
                        /* LoopSeq 3 */
                        for (unsigned int i_4 = 0; i_4 < 23; i_4 += 2) /* same iter space */
                        {
                            arr_15 [i_4] [i_3 - 4] [i_2] [i_0] [i_0] &= ((/* implicit */short) var_12);
                            var_20 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)65))) & (min((min((arr_8 [i_0] [i_1 + 3] [i_2] [i_1 + 3] [i_4]), (((/* implicit */unsigned long long int) var_15)))), (((/* implicit */unsigned long long int) min(((unsigned char)99), (((/* implicit */unsigned char) arr_12 [i_0] [i_0] [i_0] [6LL] [i_4] [i_4])))))))));
                            var_21 = ((/* implicit */unsigned char) (+(((/* implicit */int) min((((short) var_3)), (((/* implicit */short) var_2)))))));
                        }
                        for (unsigned int i_5 = 0; i_5 < 23; i_5 += 2) /* same iter space */
                        {
                            var_22 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) > (min((arr_8 [(short)7] [i_1] [i_2] [i_0] [i_5]), (((/* implicit */unsigned long long int) var_10))))));
                            arr_19 [i_0] [i_0] [0U] [i_3] [i_5] = ((/* implicit */unsigned int) min((var_3), (((/* implicit */unsigned short) (_Bool)1))));
                            arr_20 [i_5] [i_3 - 1] [i_2 - 1] = ((((/* implicit */_Bool) ((((/* implicit */int) (short)-1)) ^ (((/* implicit */int) var_15))))) && ((((-(((/* implicit */int) arr_5 [i_0] [16U] [i_3])))) <= (((/* implicit */int) ((((/* implicit */int) var_15)) >= (((/* implicit */int) var_11))))))));
                            arr_21 [i_0] [i_3] [i_2] [i_0] [i_0] &= min((((/* implicit */int) arr_13 [i_1] [i_1] [i_2 - 1] [i_3] [i_5])), (var_16));
                            arr_22 [i_5] [i_3 - 4] [i_2] [i_1 + 1] [i_1] [i_0] [i_0] = ((/* implicit */int) min((var_12), (((/* implicit */signed char) var_2))));
                        }
                        /* vectorizable */
                        for (unsigned int i_6 = 0; i_6 < 23; i_6 += 2) /* same iter space */
                        {
                            var_23 = ((/* implicit */signed char) ((((/* implicit */int) (short)-1)) - (((/* implicit */int) (unsigned short)19595))));
                            var_24 &= ((/* implicit */signed char) ((((/* implicit */int) (unsigned char)130)) < (((/* implicit */int) (_Bool)1))));
                        }
                        var_25 = ((/* implicit */unsigned short) min((min((15616249783241372233ULL), (((/* implicit */unsigned long long int) 1994686166U)))), (((/* implicit */unsigned long long int) var_7))));
                        arr_25 [i_3] [(unsigned short)10] [i_2] [i_1 - 1] [i_0] = ((/* implicit */unsigned int) min((var_6), (((/* implicit */long long int) ((unsigned int) (_Bool)1)))));
                    }
                } 
            } 
        } 
        arr_26 [i_0] = ((/* implicit */unsigned char) (~(min((arr_3 [i_0] [i_0] [i_0]), (arr_3 [i_0] [i_0] [i_0])))));
    }
    for (long long int i_7 = 0; i_7 < 15; i_7 += 1) /* same iter space */
    {
        var_26 = ((/* implicit */short) var_3);
        arr_31 [i_7] = ((/* implicit */unsigned int) min((var_5), ((-(((/* implicit */int) var_12))))));
        arr_32 [(unsigned char)3] = ((/* implicit */unsigned short) ((arr_17 [i_7] [i_7]) ^ (((/* implicit */unsigned long long int) min((((/* implicit */int) var_9)), (arr_2 [i_7]))))));
        var_27 = ((short) (~(1853756875)));
        arr_33 [i_7] = ((/* implicit */unsigned short) min((((/* implicit */int) ((unsigned char) var_15))), (((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_28 [i_7]))) > (arr_24 [i_7] [i_7] [i_7] [i_7] [i_7] [i_7] [i_7])))) >> (((/* implicit */int) ((((/* implicit */int) arr_23 [i_7] [15] [i_7] [(unsigned char)22] [i_7] [15] [i_7])) != (((/* implicit */int) arr_0 [i_7] [i_7])))))))));
    }
    for (long long int i_8 = 0; i_8 < 15; i_8 += 1) /* same iter space */
    {
        var_28 = ((/* implicit */unsigned short) var_12);
        var_29 = ((/* implicit */unsigned char) (-(((/* implicit */int) min((((/* implicit */unsigned char) var_13)), (var_1))))));
    }
    var_30 = ((/* implicit */signed char) var_8);
    var_31 = ((/* implicit */unsigned int) min((var_31), (((/* implicit */unsigned int) ((((/* implicit */int) var_1)) >> (((((/* implicit */int) ((_Bool) var_12))) >> ((-(((/* implicit */int) var_2)))))))))));
    var_32 = ((/* implicit */unsigned char) (~(2467849154U)));
}
