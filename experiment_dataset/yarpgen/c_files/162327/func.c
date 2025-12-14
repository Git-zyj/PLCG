/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162327
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162327 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162327
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
    for (unsigned char i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            {
                arr_4 [i_0] [3U] [i_1] = ((/* implicit */unsigned int) (+((-(((/* implicit */int) max(((signed char)(-127 - 1)), ((signed char)-119))))))));
                var_16 = ((/* implicit */unsigned char) 4999641690881874230ULL);
                var_17 *= ((/* implicit */unsigned int) (-(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)181)))))));
                var_18 = ((/* implicit */unsigned char) (((+(((/* implicit */int) (signed char)(-127 - 1))))) + ((~(11)))));
            }
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned int i_2 = 1; i_2 < 10; i_2 += 3) 
    {
        var_19 = (-(((/* implicit */int) max(((!(((/* implicit */_Bool) -1605906480)))), ((!(((/* implicit */_Bool) 3278945331U))))))));
        var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) -1213300057)) && (((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)(-127 - 1)))))) && (((/* implicit */_Bool) ((-1605906475) ^ (((/* implicit */int) (unsigned char)255)))))))));
        var_21 = ((/* implicit */unsigned short) max(((+((+(((/* implicit */int) (unsigned char)242)))))), (1213300056)));
        var_22 = ((/* implicit */_Bool) (unsigned char)188);
        /* LoopSeq 4 */
        /* vectorizable */
        for (long long int i_3 = 1; i_3 < 10; i_3 += 4) /* same iter space */
        {
            /* LoopSeq 3 */
            for (unsigned long long int i_4 = 2; i_4 < 10; i_4 += 4) 
            {
                var_23 = ((/* implicit */unsigned char) (~(4173243088U)));
                var_24 = ((/* implicit */unsigned long long int) ((285856412) == (-1)));
            }
            for (long long int i_5 = 4; i_5 < 11; i_5 += 4) 
            {
                arr_15 [i_2] [i_5 - 2] [i_2] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) 1605906479))))) == ((+(((/* implicit */int) (unsigned short)38158))))));
                arr_16 [i_5] [i_3] [i_5 + 1] [6LL] |= ((/* implicit */unsigned char) (+(((((/* implicit */int) (unsigned char)131)) / (718105351)))));
            }
            for (unsigned long long int i_6 = 1; i_6 < 11; i_6 += 3) 
            {
                arr_19 [i_2] [i_3] [i_3] = (-((-(4173243088U))));
                var_25 = ((/* implicit */int) max((var_25), (((/* implicit */int) (~(((((/* implicit */long long int) 0U)) ^ (562949953421311LL))))))));
                var_26 = ((/* implicit */_Bool) max((var_26), (((/* implicit */_Bool) (-(((((/* implicit */int) (unsigned char)188)) ^ (((/* implicit */int) (unsigned char)0)))))))));
                /* LoopSeq 1 */
                for (int i_7 = 2; i_7 < 9; i_7 += 2) 
                {
                    var_27 = ((/* implicit */unsigned long long int) ((((((/* implicit */unsigned long long int) 1213300073)) <= (6944417275211979163ULL))) || ((!(((/* implicit */_Bool) (unsigned short)22896))))));
                    arr_23 [i_2 + 3] [i_2 + 3] [i_2] [i_7] [i_3 + 2] = ((/* implicit */signed char) (-(3278945326U)));
                }
            }
            /* LoopNest 2 */
            for (signed char i_8 = 0; i_8 < 13; i_8 += 1) 
            {
                for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                {
                    {
                        var_28 -= ((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned char)0))));
                        var_29 = ((/* implicit */int) (+(((2663979355U) - (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)38167)))))));
                        arr_30 [i_2] [i_2] [i_2] = ((/* implicit */int) ((4294967295ULL) << ((((~(-8968509847638364781LL))) - (8968509847638364772LL)))));
                    }
                } 
            } 
            arr_31 [i_2] = ((/* implicit */unsigned char) (((+(((/* implicit */int) (unsigned char)161)))) != (((/* implicit */int) (unsigned short)42640))));
        }
        for (long long int i_10 = 1; i_10 < 10; i_10 += 4) /* same iter space */
        {
            /* LoopSeq 1 */
            /* vectorizable */
            for (signed char i_11 = 1; i_11 < 12; i_11 += 3) 
            {
                var_30 *= ((/* implicit */unsigned short) (+(1812827924)));
                var_31 = ((/* implicit */signed char) (-(562949953421311LL)));
                arr_37 [i_10] [i_2] [i_11] [(signed char)4] = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) (signed char)118))) >= (((((/* implicit */long long int) ((/* implicit */int) (unsigned short)22896))) % (-562949953421311LL)))));
                arr_38 [i_2] [i_2] [i_10] [i_2] = ((/* implicit */unsigned short) (~(-8899658587218459335LL)));
            }
            var_32 = ((/* implicit */unsigned long long int) -562949953421335LL);
        }
        for (long long int i_12 = 1; i_12 < 10; i_12 += 4) /* same iter space */
        {
            /* LoopSeq 4 */
            for (unsigned char i_13 = 2; i_13 < 12; i_13 += 3) /* same iter space */
            {
                arr_45 [i_2] [(unsigned char)6] [i_2] = ((/* implicit */int) (unsigned char)139);
                var_33 = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) (signed char)113)), (-1LL)));
                var_34 = ((/* implicit */signed char) (((-((~(((/* implicit */int) (unsigned short)65535)))))) <= (((((/* implicit */int) (!(((/* implicit */_Bool) 8899658587218459335LL))))) * (((/* implicit */int) (unsigned char)160))))));
            }
            for (unsigned char i_14 = 2; i_14 < 12; i_14 += 3) /* same iter space */
            {
                arr_50 [i_12] [i_12] [i_2] [4] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (+(min((((/* implicit */unsigned long long int) 339316773U)), (3867473497110803237ULL))))))));
                var_35 = ((/* implicit */unsigned long long int) (+(((((/* implicit */long long int) (((-2147483647 - 1)) + (((/* implicit */int) (unsigned short)42640))))) % (8899658587218459338LL)))));
            }
            for (int i_15 = 1; i_15 < 10; i_15 += 2) 
            {
                /* LoopNest 2 */
                for (unsigned long long int i_16 = 1; i_16 < 10; i_16 += 2) 
                {
                    for (signed char i_17 = 2; i_17 < 10; i_17 += 4) 
                    {
                        {
                            var_36 = ((/* implicit */unsigned char) (~(((10318400727724454088ULL) >> (((-1625285915) + (1625285951)))))));
                            var_37 -= ((/* implicit */unsigned long long int) (((((~(8128343345985097528ULL))) % (((/* implicit */unsigned long long int) -562949953421311LL)))) != (((((/* implicit */unsigned long long int) min((-592980007), (((/* implicit */int) (unsigned short)22895))))) & (14142465775953248522ULL)))));
                            var_38 *= ((/* implicit */unsigned char) min((((/* implicit */int) (!(((/* implicit */_Bool) (-(8128343345985097528ULL))))))), ((+(((/* implicit */int) (unsigned char)12))))));
                        }
                    } 
                } 
                var_39 = ((/* implicit */long long int) max((var_39), (((/* implicit */long long int) (-(((/* implicit */int) ((max((((/* implicit */unsigned long long int) (unsigned char)114)), (7166357105634306292ULL))) == (((/* implicit */unsigned long long int) (+(-8899658587218459361LL))))))))))));
                var_40 = ((/* implicit */int) (~(-8899658587218459335LL)));
            }
            /* vectorizable */
            for (unsigned short i_18 = 0; i_18 < 13; i_18 += 2) 
            {
                arr_61 [0U] [i_2] [i_18] = ((/* implicit */unsigned char) (-(((/* implicit */int) (unsigned char)126))));
                var_41 = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-125))) - (339316775U)));
                var_42 = ((/* implicit */unsigned char) (+((~(11280386968075245323ULL)))));
            }
            arr_62 [10ULL] &= max(((unsigned char)227), ((unsigned char)0));
            var_43 += ((/* implicit */int) (((!((!(((/* implicit */_Bool) -8899658587218459353LL)))))) && (((/* implicit */_Bool) (-((~(18446744073709551615ULL))))))));
        }
        for (unsigned char i_19 = 1; i_19 < 10; i_19 += 4) 
        {
            var_44 = ((/* implicit */unsigned int) max((var_44), (((/* implicit */unsigned int) (((+((+(((/* implicit */int) (unsigned char)68)))))) > (((/* implicit */int) max(((!(((/* implicit */_Bool) 3249966493316853017ULL)))), ((_Bool)1)))))))));
            var_45 = ((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)52)))))) >= (((((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) * (8899658587218459335LL)))));
            var_46 = ((/* implicit */unsigned char) (+(((/* implicit */int) (signed char)90))));
            var_47 = ((/* implicit */unsigned int) (!((!(((/* implicit */_Bool) (~(453334442865367795ULL))))))));
        }
    }
}
