/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136917
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136917 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136917
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
    var_17 ^= ((/* implicit */unsigned int) ((short) var_11));
    var_18 = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) ((unsigned char) var_11))), (var_16)))), (((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) var_16)) | (var_4)))) ? (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) var_11)), (var_0)))) : (var_4)))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned int i_0 = 1; i_0 < 21; i_0 += 4) 
    {
        var_19 = ((/* implicit */unsigned char) ((unsigned int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (short)2797)))));
        /* LoopSeq 1 */
        for (signed char i_1 = 4; i_1 < 21; i_1 += 4) 
        {
            var_20 = ((/* implicit */short) ((((/* implicit */int) (_Bool)1)) / (((var_15) / (((/* implicit */int) var_12))))));
            var_21 = ((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */int) (unsigned char)254)) : (((/* implicit */int) (_Bool)1))));
            var_22 = ((/* implicit */int) ((unsigned long long int) arr_1 [i_0 + 1]));
        }
    }
    for (unsigned char i_2 = 0; i_2 < 20; i_2 += 2) 
    {
        /* LoopNest 3 */
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            for (signed char i_4 = 0; i_4 < 20; i_4 += 1) 
            {
                for (unsigned char i_5 = 0; i_5 < 20; i_5 += 4) 
                {
                    {
                        arr_14 [i_5] = ((/* implicit */int) ((var_1) + (((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) 807184550U)), (18446744073709551615ULL)))) ? (((((/* implicit */_Bool) 1614548498804204734ULL)) ? (807184556U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) (short)32630))))))));
                        /* LoopSeq 1 */
                        for (int i_6 = 1; i_6 < 18; i_6 += 2) 
                        {
                            var_23 &= ((/* implicit */long long int) min((((int) max((((/* implicit */unsigned int) var_5)), (var_1)))), (((((/* implicit */_Bool) 3487782746U)) ? ((~(((/* implicit */int) (unsigned char)127)))) : (((/* implicit */int) arr_15 [i_6 + 1] [i_3] [i_6 + 1] [i_5] [i_6] [i_5] [i_4]))))));
                            arr_17 [i_2] = (short)-6584;
                        }
                        var_24 = ((/* implicit */_Bool) -1260968517);
                        arr_18 [i_2] [i_2] [i_3] [i_4] [i_4] = max((((/* implicit */unsigned int) var_3)), (((((/* implicit */_Bool) ((3287429843U) * (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_2])))))) ? (((/* implicit */unsigned int) ((/* implicit */int) max((var_14), (var_7))))) : (((((/* implicit */_Bool) var_9)) ? (448U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)25))))))));
                    }
                } 
            } 
        } 
        /* LoopSeq 3 */
        for (short i_7 = 0; i_7 < 20; i_7 += 2) 
        {
            /* LoopNest 3 */
            for (short i_8 = 1; i_8 < 19; i_8 += 1) 
            {
                for (int i_9 = 0; i_9 < 20; i_9 += 1) 
                {
                    for (signed char i_10 = 2; i_10 < 19; i_10 += 4) 
                    {
                        {
                            arr_31 [i_9] [i_9] = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((var_15) + (2147483647))) >> (((16832195574905346882ULL) - (16832195574905346875ULL)))))) ? (((/* implicit */long long int) ((((((/* implicit */int) (short)-8855)) + (2147483647))) << (((((-1) + (22))) - (21)))))) : (min((((/* implicit */long long int) var_15)), (var_8)))))), (((((var_13) ^ (((/* implicit */unsigned long long int) 7311829855663317635LL)))) >> (((((3380854921144240654LL) & (((/* implicit */long long int) 2237115643U)))) - (21432275LL)))))));
                            var_25 = ((/* implicit */long long int) min((var_25), (((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? ((-((+(var_0))))) : (((/* implicit */unsigned int) arr_16 [i_7] [i_10] [(unsigned char)0] [i_8 - 1] [i_7] [i_2] [i_2])))))));
                        }
                    } 
                } 
            } 
            var_26 = ((/* implicit */long long int) max((max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)14808)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (var_0)))), (var_13))), (((/* implicit */unsigned long long int) var_5))));
            arr_32 [(unsigned char)2] [i_7] [i_2] = ((((/* implicit */_Bool) max((var_15), (((/* implicit */int) ((((/* implicit */_Bool) -1767929353)) && (((/* implicit */_Bool) (short)-1233)))))))) ? (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)14802)) && (((/* implicit */_Bool) (signed char)0))))) : (max((((/* implicit */int) var_3)), (((arr_4 [i_2]) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_14)))))));
            var_27 = ((/* implicit */short) (-(((/* implicit */int) ((((var_16) & (((/* implicit */unsigned int) ((/* implicit */int) var_6))))) >= (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)1)) ? (((/* implicit */int) var_14)) : (var_9)))))))));
            var_28 = ((/* implicit */signed char) (+(((/* implicit */int) (short)-6579))));
        }
        for (unsigned int i_11 = 4; i_11 < 16; i_11 += 4) 
        {
            var_29 = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) ((((/* implicit */int) var_3)) + (((/* implicit */int) ((short) (unsigned short)14806)))))), (((-3380854921144240685LL) / (((((/* implicit */_Bool) 3380854921144240714LL)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)66))) : (-1947773208953763419LL)))))));
            var_30 = ((/* implicit */unsigned int) max(((~((-(((/* implicit */int) (unsigned short)62)))))), (((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((/* implicit */int) (short)6597))) : (var_2)))) >= (((5797082441561080935ULL) / (((/* implicit */unsigned long long int) -1440717462340624891LL)))))))));
        }
        /* vectorizable */
        for (signed char i_12 = 0; i_12 < 20; i_12 += 2) 
        {
            var_31 = ((/* implicit */unsigned int) min((var_31), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)25217)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) (unsigned short)50715)))) : (10897491962680125664ULL))))));
            var_32 = ((/* implicit */short) max((var_32), (((/* implicit */short) 2240134397U))));
        }
        var_33 = ((/* implicit */unsigned long long int) (~(max((((unsigned int) (short)-6588)), (((((/* implicit */_Bool) (signed char)12)) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) var_3)))))))));
        var_34 = ((/* implicit */unsigned short) max((var_34), (((/* implicit */unsigned short) var_16))));
    }
}
