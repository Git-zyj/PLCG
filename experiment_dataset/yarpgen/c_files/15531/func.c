/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15531
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15531 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15531
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
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        /* LoopNest 3 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 1; i_2 < 14; i_2 += 1) 
            {
                for (short i_3 = 0; i_3 < 15; i_3 += 2) 
                {
                    {
                        arr_12 [i_0] [i_1] [i_2] [0] [i_3] = (unsigned char)255;
                        var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) (!((((!(((/* implicit */_Bool) var_4)))) && ((!(((/* implicit */_Bool) (unsigned char)232)))))))))));
                        var_21 = ((/* implicit */short) (~(((((18446744073709551615ULL) << (((((/* implicit */int) var_7)) - (35))))) << (((((/* implicit */int) var_12)) - (106)))))));
                        var_22 -= ((/* implicit */unsigned long long int) (short)-32746);
                    }
                } 
            } 
        } 
        var_23 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) var_3)) & (3035808452648450997ULL)));
    }
    for (unsigned long long int i_4 = 0; i_4 < 22; i_4 += 4) 
    {
        /* LoopSeq 2 */
        for (unsigned long long int i_5 = 2; i_5 < 19; i_5 += 2) /* same iter space */
        {
            var_24 |= ((/* implicit */long long int) min(((-(((unsigned long long int) var_19)))), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_5)) * (((/* implicit */int) ((_Bool) 1366410854))))))));
            var_25 = ((/* implicit */short) (!(((((/* implicit */int) (_Bool)1)) == (((/* implicit */int) (unsigned char)249))))));
            var_26 -= ((/* implicit */unsigned char) min((var_17), (((/* implicit */int) ((short) (-(((/* implicit */int) var_2))))))));
            /* LoopNest 3 */
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
            {
                for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
                {
                    for (unsigned long long int i_8 = 0; i_8 < 22; i_8 += 2) 
                    {
                        {
                            arr_28 [i_4] [i_7] = ((/* implicit */unsigned char) ((max((((((/* implicit */int) var_6)) | (((/* implicit */int) (short)960)))), (((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) var_16)))))) == (min((((/* implicit */int) min(((_Bool)1), ((_Bool)1)))), ((-(((/* implicit */int) var_2))))))));
                            arr_29 [i_4] [i_5] [i_8] [i_7] [i_8] [i_4] [i_7] = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((unsigned long long int) 886683777)) > (((/* implicit */unsigned long long int) ((long long int) var_0)))))) == ((-(((/* implicit */int) (signed char)127))))));
                            var_27 = ((unsigned long long int) ((long long int) (!(((/* implicit */_Bool) var_11)))));
                            var_28 *= ((/* implicit */short) max((((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned char)6))))), (((((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned char)236))))) | (((var_14) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))))));
                        }
                    } 
                } 
            } 
        }
        /* vectorizable */
        for (unsigned long long int i_9 = 2; i_9 < 19; i_9 += 2) /* same iter space */
        {
            var_29 ^= ((/* implicit */long long int) ((unsigned int) ((var_3) != (((/* implicit */int) var_5)))));
            arr_32 [i_4] [8ULL] |= ((/* implicit */short) ((unsigned long long int) (+(var_8))));
            /* LoopNest 3 */
            for (unsigned char i_10 = 0; i_10 < 22; i_10 += 1) 
            {
                for (unsigned short i_11 = 1; i_11 < 19; i_11 += 2) 
                {
                    for (unsigned long long int i_12 = 0; i_12 < 22; i_12 += 2) 
                    {
                        {
                            arr_43 [i_11] [i_10] [i_12] = ((/* implicit */unsigned short) ((((unsigned long long int) var_15)) < (((((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) * (0ULL)))));
                            arr_44 [i_4] [i_4] [(unsigned short)19] [i_4] [i_11] [i_4] = ((/* implicit */_Bool) ((int) var_17));
                            arr_45 [i_4] [i_11] [i_11] [i_4] [i_4] = ((/* implicit */signed char) ((((/* implicit */int) (!(((/* implicit */_Bool) var_0))))) << (((((unsigned long long int) 9028079932165434037LL)) - (9028079932165434024ULL)))));
                        }
                    } 
                } 
            } 
            var_30 -= ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) var_3)))) || (((/* implicit */_Bool) ((int) (signed char)(-127 - 1))))));
            arr_46 [2U] [(_Bool)1] [i_9] = ((/* implicit */short) ((((/* implicit */_Bool) ((signed char) var_17))) && (((/* implicit */_Bool) ((72053195991416832ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)120))))))));
        }
        var_31 = ((/* implicit */short) max((((/* implicit */long long int) (-(var_3)))), (((long long int) var_3))));
        arr_47 [i_4] [i_4] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)236))))) ? ((+(((/* implicit */int) ((signed char) var_8))))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))))))));
    }
    var_32 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (_Bool)1))));
    var_33 += ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((((/* implicit */int) ((4294967285U) <= (((/* implicit */unsigned int) ((/* implicit */int) var_12)))))) << (((((unsigned long long int) var_4)) - (1754678689ULL)))))) * (min((max((((/* implicit */unsigned long long int) var_10)), (var_14))), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) var_6)), (0U))))))));
    var_34 = ((/* implicit */unsigned char) (_Bool)1);
    var_35 = ((/* implicit */unsigned long long int) ((unsigned char) min((((/* implicit */unsigned long long int) (-(((/* implicit */int) var_13))))), (8989607068696576ULL))));
}
