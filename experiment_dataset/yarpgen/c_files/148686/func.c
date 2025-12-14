/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148686
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148686 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148686
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
    var_19 = ((/* implicit */int) ((unsigned short) (~((~(var_10))))));
    var_20 &= ((/* implicit */unsigned char) ((int) ((int) (+((-2147483647 - 1))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        arr_4 [i_0] = ((int) ((unsigned long long int) var_9));
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 2; i_1 < 12; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 2; i_2 < 13; i_2 += 4) 
            {
                {
                    var_21 -= ((int) (~(((/* implicit */int) (unsigned short)0))));
                    /* LoopSeq 4 */
                    for (unsigned char i_3 = 0; i_3 < 15; i_3 += 4) 
                    {
                        var_22 = ((/* implicit */int) (+((-(10971380734697754049ULL)))));
                        var_23 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (-(var_0))))));
                        var_24 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (-(var_0))))));
                    }
                    for (int i_4 = 2; i_4 < 14; i_4 += 4) 
                    {
                        arr_16 [i_0] [i_4 - 1] = (~((~((-2147483647 - 1)))));
                        var_25 += ((/* implicit */_Bool) (~((~(arr_13 [i_4] [i_2] [i_1])))));
                    }
                    for (unsigned char i_5 = 0; i_5 < 15; i_5 += 4) 
                    {
                        var_26 = ((/* implicit */unsigned char) ((unsigned short) ((_Bool) arr_13 [i_0] [i_1] [i_2])));
                        var_27 -= ((/* implicit */unsigned char) ((unsigned long long int) (~(((/* implicit */int) arr_17 [i_1])))));
                        /* LoopSeq 3 */
                        for (unsigned char i_6 = 0; i_6 < 15; i_6 += 4) 
                        {
                            var_28 ^= ((/* implicit */_Bool) (~((-(arr_19 [i_6] [8] [i_5] [i_0] [i_0] [i_0])))));
                            var_29 -= ((/* implicit */_Bool) ((unsigned char) (~(arr_11 [i_0]))));
                            arr_22 [i_2] = ((unsigned char) ((unsigned long long int) arr_12 [i_0] [i_0] [i_0] [i_0] [4ULL]));
                        }
                        for (int i_7 = 1; i_7 < 13; i_7 += 4) /* same iter space */
                        {
                            var_30 = ((/* implicit */unsigned short) (~((+(1033788994)))));
                            var_31 = ((/* implicit */unsigned char) max((var_31), (((/* implicit */unsigned char) (~(((unsigned long long int) (-2147483647 - 1))))))));
                        }
                        for (int i_8 = 1; i_8 < 13; i_8 += 4) /* same iter space */
                        {
                            var_32 = (-(((/* implicit */int) ((unsigned short) -7150952637036382605LL))));
                            var_33 = (+(((int) 2147483647)));
                            var_34 += ((/* implicit */unsigned long long int) ((_Bool) (+(13961367881725199603ULL))));
                            var_35 = ((/* implicit */int) (~(((long long int) 3664397388438640840LL))));
                        }
                    }
                    for (unsigned char i_9 = 0; i_9 < 15; i_9 += 4) 
                    {
                        var_36 = ((unsigned long long int) ((unsigned char) var_17));
                        var_37 = ((/* implicit */int) min((var_37), (((/* implicit */int) ((long long int) (unsigned char)185)))));
                        var_38 = ((/* implicit */int) ((unsigned char) (-(((/* implicit */int) (unsigned char)128)))));
                        var_39 = ((/* implicit */unsigned char) (+((~(arr_14 [i_0] [i_1 - 1] [i_9])))));
                        arr_29 [i_0] [i_1 + 3] [8ULL] [i_1 + 3] [i_9] = ((/* implicit */unsigned char) (~(((/* implicit */int) (unsigned char)189))));
                    }
                }
            } 
        } 
        var_40 -= (~(((/* implicit */int) ((unsigned char) var_12))));
    }
    for (unsigned long long int i_10 = 0; i_10 < 10; i_10 += 4) 
    {
        /* LoopNest 3 */
        for (unsigned char i_11 = 0; i_11 < 10; i_11 += 4) 
        {
            for (unsigned char i_12 = 1; i_12 < 7; i_12 += 4) 
            {
                for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                {
                    {
                        var_41 *= ((/* implicit */unsigned short) (-(((/* implicit */int) ((short) ((unsigned short) var_16))))));
                        var_42 &= ((/* implicit */unsigned long long int) ((int) (~(((unsigned long long int) arr_20 [7] [i_11] [7] [i_11] [i_11] [7])))));
                        arr_39 [i_12] [i_11] [i_10] [i_10] &= ((/* implicit */unsigned char) (~((~((~(7926008845837360477LL)))))));
                    }
                } 
            } 
        } 
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned long long int i_14 = 1; i_14 < 8; i_14 += 4) 
        {
            /* LoopNest 3 */
            for (unsigned long long int i_15 = 0; i_15 < 10; i_15 += 4) 
            {
                for (unsigned char i_16 = 0; i_16 < 10; i_16 += 4) 
                {
                    for (unsigned char i_17 = 0; i_17 < 10; i_17 += 4) 
                    {
                        {
                            arr_48 [3] [(unsigned char)6] [(unsigned char)6] [i_15] [4ULL] [i_14] [i_10] &= ((/* implicit */unsigned char) (-(((/* implicit */int) (!((_Bool)1))))));
                            var_43 += ((unsigned char) (!((_Bool)1)));
                        }
                    } 
                } 
            } 
            var_44 = ((/* implicit */int) ((short) ((unsigned char) arr_38 [i_10] [i_14] [i_14] [i_10])));
            arr_49 [i_10] = (!(((/* implicit */_Bool) -1289046556)));
            var_45 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (-(arr_19 [i_10] [i_10] [0ULL] [8ULL] [i_10] [i_10]))))));
        }
    }
    var_46 = ((/* implicit */unsigned short) ((unsigned char) ((int) (+(var_4)))));
    var_47 -= ((/* implicit */unsigned char) (-((~((-(var_15)))))));
}
